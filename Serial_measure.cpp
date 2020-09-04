#include "Serial_measure.h"

Serial_measure::Serial_measure(void)
{
	iterator = 0;
}

void Serial_measure::add_measure(T m)
{
	measures[iterator] = m;
	iterator++;
	if (iterator == E) iterator = 0;
}

void Serial_measure::mov_measure(T m, unsigned char i)
{
	if (i >= E) return;
	else
	{
		measures[i] = m;
	}
}

T Serial_measure::get_mid_value(void)
{
	T sum;
	if (iterator == 0) return 0;
	for (i = 0; i < iterator; i++)
	{
		sum += measures[i];
	}
	 return  (sum / iterator);
}