#ifndef SYSTICK_H
#define SYSTICK_H

	#include "stm32f4xx.h"
	
	void setSysTick(void);
	void SysTick_Handler(void);
	void delay_ms(uint16_t delay_temp);
	
#endif
