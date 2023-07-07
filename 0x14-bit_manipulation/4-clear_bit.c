#include "main.h"

/**
 * clear_bit - establishes a bit's value to 0
 * @n: pointer indicating the new number
 * @index: index of the to-clear bit
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
