#include "stm32f10x.h"                  // Device header

uint16_t CounterSencor_Count;

void CounterSencor_Init()
{
	
}

uint16_t CounterSencor_Get()
{
	return CounterSencor_Count;
}

void EXTI15_10_IRQHandler()
{
	if(EXTI_GetITStatus(EXTI_Line14)==SET)
	{
		CounterSencor_Count++;
		EXTI_ClearITPendingBit(EXTI_Line14);
	}
}