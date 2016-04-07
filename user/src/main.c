#include "main.h"


int main(void) {
	setLeds();
	setUsart();
	setSysTick();
	setRcc();

	uint16_t x = 0;
	
	while(1) {
		
		USART_SendData(UART4, x++);
		setRedLed();
		delay_ms(500);
		resetRedLed();
		delay_ms(500);
	}
	
}



