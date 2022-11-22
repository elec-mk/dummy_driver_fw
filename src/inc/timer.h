#ifndef _TIMER_H
#define _TIMER_H

#include "stm32f4xx_hal.h"

class timer
{
private:
    TIM_HandleTypeDef htim;
public:
    timer(TIM_TypeDef *tim);
    ~timer();

    void initialise();

};

#endif