#include "stm32f10x.h"

#include "bsp_led.h"
#include "./DMA/inc/bsp_dma_m2p.h"

int main(void)
{
    int i;
    // ≥ı ºªØLED
    LED_GPIO_Config();
    USART_Config();
    for (i = 0; i < SENDBUFF_SIZE; i++)
    {
        SendBuffer[i] = 'P';
    }
    
    Usartx_DMA_Config();
    USART_DMACmd(DEBUG_USARTx, USART_DMAReq_Tx, ENABLE);
    
    
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
