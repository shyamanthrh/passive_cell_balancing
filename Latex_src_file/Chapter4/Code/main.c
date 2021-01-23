#include "main.h"
#include "usart.h"
#include "gpio.h"
#include "pl455.h"


#define NOC 6 //Number of cells
#define MASK (~(0xFFFF << NOC)) //mask off unused cells

int main(void)
{
  
  // Reset of all peripherals, Initializes the Flash interface and the Systick.
  HAL_Init();

  //Configure the system clock
  SystemClock_Config();

  //Initialize all configured peripherals
  MX_GPIO_Init();
  MX_USART1_UART_Init();


	
  BYTE bFrame[132];	
  float volt[NOC];
  volatile float maxCellVoltage = 0; 
  volatile float minCellVoltage = 0;
  volatile int minCellIdx = 0;
  volatile int maxCellIdx = 0;
  volatile uint16_t balance_en = 0x0000;
  
  powerDown();
  WakePL455();
		
  WriteReg(0, 107, 0x8000, 2, FRMWRT_SGL_NR); // Mask Customer Checksum Fault bit

  // Clear all faults
  WriteReg(0, 82, 0xFFC0, 2, FRMWRT_SGL_NR);  // clear all fault summary flags
  WriteReg(0, 81, 0x38, 1, FRMWRT_SGL_NR);    // clear fault flags in the system status register //comm clear and reset

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
			balance_en =  MASK & ~(1<<(minCellIdx-1));
	  else
			balance_en = 0x0000;
			
    WriteReg(0,19,8,1,FRMWRT_SGL_NR); // Continue balance on fault
    WriteReg(0,20,balance_en,2,FRMWRT_SGL_NR); // balance on for the cell with minimum voltage