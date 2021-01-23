void powerDown(void)
{
	HAL_Delay(2000);
	WriteReg(0,12,0x40,1,FRMWRT_SGL_NR); //pwrdwn
}
	
void WakePL455(void){
	  
                HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,GPIO_PIN_RESET); // assert wake (active low)
	  HAL_Delay(2000);
	  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,GPIO_PIN_SET);
	  GPIO_InitTypeDef GPIO_InitStruct = {0}; // This structure is redifined to reconfigure PB15 to Open Drain mode from Push pull.
	 /*Configure GPIO pin : PB15 */
                GPIO_InitStruct.Pin = GPIO_PIN_15;
                GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_OD; // Set as Open-Drain
                GPIO_InitStruct.Pull = GPIO_NOPULL;
                GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
                HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
                 HAL_Delay(2000);
	  }

int  WriteFrame(BYTE bID, uint16_t wAddr, BYTE * pData, BYTE bLen, BYTE bWriteType)
{
    int    bPktLen = 0;
    BYTE   pFrame[32];
    BYTE * pBuf = pFrame;
    uint16_t   wCRC;

    if (bLen == 7 || bLen > 8)
        return 0;

    memset(pFrame, 0x7F, sizeof(pFrame));
    if (wAddr > 255)    {
        *pBuf++ = 0x88 | bWriteType | bLen; // use 16-bit address
        if (bWriteType == FRMWRT_SGL_R || bWriteType == FRMWRT_SGL_NR || bWriteType == FRMWRT_GRP_R || bWriteType == FRMWRT_GRP_NR)//(bWriteType != FRMWRT_ALL_NR)// || (bWriteType != FRMWRT_ALL_R))
        {
            *pBuf++ = (bID & 0x00FF);
        }
        *pBuf++ = (wAddr & 0xFF00) >> 8;
        *pBuf++ =  wAddr & 0x00FF;
    }
    else {
        *pBuf++ = 0x80 | bWriteType | bLen; // use 8-bit address
        if (bWriteType == FRMWRT_SGL_R || bWriteType == FRMWRT_SGL_NR || bWriteType == FRMWRT_GRP_R || bWriteType == FRMWRT_GRP_NR)
        {
            *pBuf++ = (bID & 0x00FF);
        }
        *pBuf++ = wAddr & 0x00FF;
    }

    while(bLen--)
        *pBuf++ = *pData++;

    bPktLen = pBuf - pFrame;

    wCRC = CRC16(pFrame, bPktLen);
    *pBuf++ = wCRC & 0x00FF;
    *pBuf++ = (wCRC & 0xFF00) >> 8;
    bPktLen += 2;

		HAL_UART_Transmit(&huart1,pFrame,(uint16_t)bPktLen,2);

    return bPktLen;
}

int ReadResp(BYTE * pData, uint16_t bLen)
{
	HAL_UART_Receive_IT(&huart1,pData,bLen);
	return 0;
}

void getcellVoltages(uint8_t *data,uint8_t NOC,float *volt)
{
	for(int i=1;i<=NOC;i++)
	{
	*volt++=(data[2*i-1]<<8|data[i*2])*0.00007666;	
	}
}
