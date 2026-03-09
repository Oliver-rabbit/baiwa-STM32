#include "stm32f10x.h"

#include "./LED/inc/bsp_led.h"
#include "./KEY/inc/bsp_key.h"
#include "./BEEP/inc/bsp_beep.h"
#include "./EXTI/inc/bsp_exti.h"
#include "./UASRT/inc/bsp_usart.h"


int main(void)
{
    // 初始化usart中断
    USART_NVIC_Configuration();
    // 初始化usart配置
    USART_Config();
    
    Usart_SendString(DEBUG_USARTx, "这是一个串口中断接收回显实验\n");
    printf("白袜: 这是一个串口接收printf函数实验\n");
    while (1) {

    }
}
