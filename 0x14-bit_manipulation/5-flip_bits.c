#include "main.h"

unsigned int flip_bits(unsigned long int om, unsigned long int um)
{
	int i, count = 0;
	unsigned long int result = om ^ um;

for (i = 63; i >=0; i--)
	{
		if ((result >> i) & 1)
			count++;
	}

	return (count);

}
