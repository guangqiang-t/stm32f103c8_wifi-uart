#include "stm32f10x.h"
#include "delay.h"
#include "usart123.h"
#include "led.h"

int main (void)
{
	led_init();
	usart_config();
	nvic_config();
	while(1)
	{
		led_on();
		DelayMs(200);
		led_off();
		DelayMs(200);
	}
	
//	return 0;
}

