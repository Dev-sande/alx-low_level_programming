#include "main.h"

/**
 * flip_bits - calculates the number of bits.
 * @n: first value.
 * @m: second value.
 *
 * Return: bit count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nits;

	for (nits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nits++;
	}

	return (nits);
}
