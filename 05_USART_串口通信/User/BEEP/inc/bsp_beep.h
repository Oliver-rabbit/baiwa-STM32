#ifndef __BAIWA_BSP_BEEP__
#define __BAIWA_BSP_BEEP__

#include "stm32f10x.h"

#define BEEP_GPIO_CLK  RCC_APB2Periph_GPIOC
#define BEEP_GPIO_PORT GPIOC
#define BEEP_GPIO_PIN  GPIO_Pin_0

/* 高电平时，蜂鸣器响 */
#define BEEP_ON  1
#define BEEP_OFF 0

/* 使用标准的固件库控制IO*/
#define BEEP(a) if (a)  \
                    GPIO_SetBits(BEEP_GPIO_PORT,BEEP_GPIO_PIN);\
                    else    \
                    GPIO_ResetBits(BEEP_GPIO_PORT,BEEP_GPIO_PIN)

extern void Beep_GPIO_Config(void);

#endif
