#include "main.h"

/**
 * clear_bit - clears a bit at a given index
 * in an unsigned long integer
 * @n: pointer of an unsigned long int.
 * @index: bit index.
 *
 * Return: 1 on success and -1 on fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
