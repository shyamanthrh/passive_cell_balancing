/*
 * pl455.h
 *
 *  Created on: Nov 22, 2020
 *      Author: amrathesh
 */

#ifndef PL455_H_
#define PL455_H_

#include "stdint.h"
#include "main.h"
#include "usart.h"
#include "gpio.h"

//typrdefs
typedef unsigned char BYTE;
typedef unsigned int BOOL;
typedef signed int HANDLE;


	

// User defines
#define FRMWRT_SGL_R	0x00 // single device write with response
#define FRMWRT_SGL_NR	0x10 // single device write without response
#define FRMWRT_GRP_R	0x20 // group broadcast with response
#define FRMWRT_GRP_NR	0x30 // group broadcast without response
#define FRMWRT_ALL_R	0x60 // general broadcast with response
#define FRMWRT_ALL_NR	0x70 // general broadcast without response





// Function Prototypes
void WakePL455(void);
void powerDown(void);


int  WriteReg(BYTE bID, uint16_t wAddr, uint64_t dwData, BYTE bLen, BYTE bWriteType);
int  WriteFrame(BYTE bID, uint16_t wAddr, BYTE * pData, BYTE bLen, BYTE bWriteType);
void getcellVoltages(uint8_t *data,uint8_t NOC,float *volt);
int findminimum(float *data,uint8_t NOC);

int ReadResp(BYTE * pData, uint16_t bLen);

void delayms(uint16_t ms);
void delayus(uint16_t us);

#endif /* PL455_H_ */
//EOF
