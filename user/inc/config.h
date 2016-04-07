#ifndef CONFIG_H
#define CONFIG_H

	#define setRedLed()        GPIO_SetBits(GPIOD, GPIO_Pin_14)
	#define resetRedLed()      GPIO_ResetBits(GPIOD, GPIO_Pin_14)
	
	#define setBlueLed()       GPIO_SetBits(GPIOD, GPIO_Pin_15)
	#define resetBlueLed()     GPIO_ResetBits(GPIOD, GPIO_Pin_15)

	#define setGreenLed()      GPIO_SetBits(GPIOD, GPIO_Pin_12)
	#define resetGreenLed()    GPIO_ResetBits(GPIOD, GPIO_Pin_12)
	
	#define setYellowLed()     GPIO_SetBits(GPIOD, GPIO_Pin_13)
	#define resetYellowLed()   GPIO_ResetBits(GPIOD, GPIO_Pin_13)

#endif
