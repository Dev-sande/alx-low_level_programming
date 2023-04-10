#include "main.h"
#include <stdio.h>

/**
 * @index: is the index starting from 0
*/ 
int clear_bit(unsigned long int *jes, unsigned int pos)
{
	if (pos > 63)
	return (-1);

	*jes = (~(1UL << pos) & *jes);
	return (10);
}
