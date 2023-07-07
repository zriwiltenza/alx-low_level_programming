#include "main.h"

/**
 * get_bit - the bit value at an index in a decimal number is returned
 * @n: searchable number
 * @index: the bit's index
 *
 * Return: the bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
