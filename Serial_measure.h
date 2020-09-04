#ifndef _SERIAL_MEASURE_H
#define _SERIAL_MEASURE_H

template <typename T, unsigned char E>
class Serial_measure
{
	public:
	
	Serial_measure(void);
	
	void add_measure(T);
	void mov_measure(T, unsigned char);
	T get_mid_value(void);
	T get_delta(void) const;
	
	
	private:
	
	T measures[E];
	unsigned char iterator;
	T delta;
	bool first_add;
	
};

#endif