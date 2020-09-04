#ifndef _SERIAL_MEASURE_H
#define _SERIAL_MEASURE_H

template <typename T, unsigned char E>
class Serial_measure
{
	public:
	
	Serial_measure(void);
	
	void add_measure(T);
	T get_mid_value(void);
	
	
	private:
	
	T measures[E];
	unsigned char iterator;
	
};

#endif