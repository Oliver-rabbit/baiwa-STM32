#include "stm32f10x.h"

#include "./LED/inc/bsp_led.h"
#include "./KEY/inc/bsp_key.h"
#include "./BEEP/inc/bsp_beep.h"
#include "./EXTI/inc/bsp_exti.h"


int main(void)
{
    // ≥ı ºªØLED
    NVIC_Configuration();
    LED_GPIO_Config();


    EXTI_Key_Config();
    
    while (1) {

    }
}
