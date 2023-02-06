/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "delay.h"
#include "QDTFT_demo.h"
#include "Lcd_Driver.h"
#include "GUI.h"


int main(void)
{

  SystemInit();	//System init.
  delay_init(72);//Delay init.
  while(1)
  {  
		QDTFT_Test_Demo();	//See the test details in QDTFT_Demo.c		
  }

}





/******************* (C) COPYRIGHT 2009 STMicroelectronics *****END OF FILE****/
