#include "systick.h"

uint16_t delay_count = 0;

void setSysTick(void) {
	SystemCoreClockUpdate();
	SysTick_Config(SystemCoreClock / 1000); // 1 ms
		
}

void SysTick_Handler(void) {
	if (delay_count > 0) {
		delay_count--;
	}
	
}

void delay_ms(uint16_t delay_temp) {
	delay_count = delay_temp;
	
	while(delay_count) {}
	
}


