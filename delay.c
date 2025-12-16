#include"delay.h"
void delay_ms(int ms)
{
    for(volatile long i=0;i<ms *1000;i++);
}