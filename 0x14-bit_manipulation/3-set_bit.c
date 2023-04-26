#include "main.h"
/**
 * set_bit - sets the value of a specific bit at the given index to 1.
 * @n: pointer to unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if on pass and -1 on fail.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
