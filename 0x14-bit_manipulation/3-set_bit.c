#include "main.h"

/**
 * set_bit - adds 1 to a bit at a specific index
 * @n: pointer indicating the new number
 * @index: to set the bit's index to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
