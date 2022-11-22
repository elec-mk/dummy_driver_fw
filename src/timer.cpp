#include "timer.h"

timer::timer(TIM_TypeDef *tim)
{
    htim.Instance = tim;
}

timer::~timer()
{
}

void timer::initialise()
{

}
