#include "stm32f10x.h"

#include "./LED/inc/bsp_led.h"
#include "./KEY/inc/bsp_key.h"

int main(void)
{
    // ≥ı ºªØLED
    LED_GPIO_Config();
    Key_GPIO_Config();
    
    while (1) {
        if (Key_Scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN) == KEY_ON)
        {
            LED1(ON);
        }
        if (Key_Scan(KEY2_GPIO_PORT, KEY2_GPIO_PIN) == KEY_ON)
        {
            LED1(OFF);
        }
    }
}
