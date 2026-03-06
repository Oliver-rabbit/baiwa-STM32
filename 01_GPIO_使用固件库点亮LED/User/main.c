#include "stm32f10x.h"

#include "bsp_led.h"

int main(void)
{
    // ≥ı ºªØLED
    LED_GPIO_Config();
    
    while (1) {
        LED1(ON);
        SOFT_DELAY;
        LED1(OFF);
        LED2(ON);
        SOFT_DELAY;
        LED2(OFF);
        LED3(ON);
        SOFT_DELAY;
        LED3(OFF);
    }
}
