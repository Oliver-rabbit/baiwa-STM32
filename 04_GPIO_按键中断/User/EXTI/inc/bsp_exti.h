#ifndef __BAIWA_BSP_EXTI__
#define __BAIWA_BSP_EXTI__

#include "stm32f10x.h"

#define KEY1_INT_GPIO_PORT          GPIOA
#define KEY1_INT_GPIO_CLK           (RCC_APB2Periph_GPIOA | RCC_APB2Periph_AFIO)
#define KEY1_INT_GPIO_PIN           GPIO_Pin_0
#define KEY1_INT_EXTI_PORTSOURCE    GPIO_PortSourceGPIOA
#define KEY1_INT_EXTI_PINSOURCE     GPIO_PinSource0
#define KEY1_INT_EXTI_LINE          EXTI_Line0
#define KEY1_INT_EXTI_IRQ           EXTI0_IRQn

#define KEY1_IRQHandler             EXTI0_IRQHandler

extern void NVIC_Configuration(void);
extern void EXTI_Key_Config(void);

#endif
