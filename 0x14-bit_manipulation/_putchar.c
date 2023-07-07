#include "main.h"
#include <unistd.h>
/**
 * _putchar - creates a stdout file with the character C
 * @c: The text to be printed
 *
 * Return: Regarding achievement 1.
 * On error, -1 returned, and the proper value of errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
