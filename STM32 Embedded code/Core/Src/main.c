/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @title          : Passive Cell Balancing
  * @file           : main.c
  * @brief          : Main program body
  * @author         : Amrathesh and Shyamanth RH
  * @date           : 13/12/2020
  * @description    : This code communicates with bq76pl55a IC. This was the day we had a major breakthrough in our project on cell balancing 
  * 		      We could finally communicate with bq76pl55a battery monitoring IC
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "pl455.h"


/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define NOC 6 //Number of cells
#define MASK (~(0xFFFF << NOC)) //mask off unused cells
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART1_UART_Init();
  /* USER CODE BEGIN 2 */

	
  BYTE bFrame[132];
	
  float volt[NOC];
	float maxCellVoltage = 0; 
	float minCellVoltage = 0;
  volatile int minCellIdx = 0;
	volatile int maxCellIdx = 0;
  volatile uint16_t balance_en = 0x0000;
  
  powerDown();
  WakePL455();
	
	
  WriteReg(0, 107, 0x8000, 2, FRMWRT_SGL_NR); // Mask Customer Checksum Fault bit

  // Clear all faults
  WriteReg(0, 82, 0xFFC0, 2, FRMWRT_SGL_NR);  // clear all fault summary flags
  WriteReg(0, 81, 0x38, 1, FRMWRT_SGL_NR);    // clear fault flags in the system status register //comm clear and reset

  //Using Default addr i.e 0

  delayms(10);

  // Configure AFE to fastest setting
  WriteReg(0, 61, 0x00, 1, FRMWRT_ALL_NR); // set 0 initial delay
	
  // Configure cell voltage and internal temp sample period
  WriteReg(0, 62, 0x04, 1, FRMWRT_ALL_NR); // set 4.13us cell and 12.6us temp ADC sample period
	
  // Configure the oversampling rate
  WriteReg(0, 7, 0x00, 1, FRMWRT_ALL_NR); // set 0 oversampling means no oversampling
	

  WriteReg(0, 81, 0x38, 1, FRMWRT_SGL_NR); // clear fault flags in the system status register
  WriteReg(0, 82, 0xFFC0, 2, FRMWRT_SGL_NR); // clear all fault summary flags

  // Select number of cells and channels to sample
  WriteReg(0, 13, 0x06, 1, FRMWRT_SGL_NR); // set number of cells to 6
		
  WriteReg(0, 3, 0x003F0000, 4, FRMWRT_SGL_NR); // select 7 cell
			
  // Set cell over-voltage and cell under-voltage thresholds on a single board 
  WriteReg(0, 144, 0xD70A, 2, FRMWRT_SGL_NR); // set OV threshold = 4.2000V
  WriteReg(0, 142, 0x8CCD, 2, FRMWRT_SGL_NR); // set UV threshold = 2.75000V
	
  HAL_Delay(1000);
	
	
	
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1){ 
		
		HAL_Delay(5000);
		WriteReg(0, 2, 0x01, 1, FRMWRT_SGL_R); // send sync sample command
		ReadResp(bFrame,15); //pkt header + 6 cell voltages + CRC
		
		HAL_Delay(1000);
		
		getcellVoltages(bFrame,NOC,volt);
		
		minCellIdx = findminimum(volt,NOC);
		maxCellIdx = findmaximum(volt,NOC);
		
		minCellVoltage = volt[minCellIdx - 1];
		maxCellVoltage = volt[maxCellIdx - 1];
		
		
	  if(maxCellVoltage - minCellVoltage > 0.01)
			balance_en =  MASK & ~(1<<minCellIdx);
	  else
			balance_en = 0x0000;
			

    WriteReg(0,19,8,1,FRMWRT_SGL_NR); // Continue balance on fault
    WriteReg(0,20,balance_en,2,FRMWRT_SGL_NR); // balance on for the cell with minimum voltage
		
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
