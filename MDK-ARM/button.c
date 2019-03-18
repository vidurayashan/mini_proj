#include "main.h"
#include "stm32f0xx_hal.h"

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(GPIO_Pin);
	
	//my_button_pressed = 1;
	unsigned int cou=0;
	
	for(cou=0;cou<6;cou++){
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_8);
		for (int u=0; u<1000000; u++);
		//cou = cou + 1;
		
	}
		
	
  /* NOTE: This function should not be modified, when the callback is needed,
            the HAL_GPIO_EXTI_Callback could be implemented in the user file
   */ 
}
