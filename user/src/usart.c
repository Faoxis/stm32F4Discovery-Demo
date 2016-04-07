#include "usart.h"

void setUsart(void) {
	GPIO_InitTypeDef GPIO_Init_USART;
	USART_InitTypeDef USART_InitUser;
	
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	
	GPIO_Init_USART.GPIO_Pin    = GPIO_Pin_10 | GPIO_Pin_11;
	GPIO_Init_USART.GPIO_Mode   = GPIO_Mode_AF;
	GPIO_Init_USART.GPIO_Speed  = GPIO_Speed_50MHz;
	GPIO_Init_USART.GPIO_OType  = GPIO_OType_PP;
	GPIO_Init_USART.GPIO_PuPd   = GPIO_PuPd_UP;
	
	GPIO_Init(GPIOC, &GPIO_Init_USART);
	
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource10, GPIO_AF_UART4);
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource11, GPIO_AF_UART4);
	
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART4, ENABLE);
	
	USART_InitUser.USART_BaudRate = 9600;
	USART_InitUser.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitUser.USART_Mode = USART_Mode_Tx | USART_Mode_Rx;
	USART_InitUser.USART_Parity = USART_Parity_No;
	USART_InitUser.USART_StopBits = USART_StopBits_1;
	USART_InitUser.USART_WordLength = USART_WordLength_8b;
	
	USART_Init(UART4, &USART_InitUser);
	
	USART_Cmd(UART4, ENABLE);
	
	
}

