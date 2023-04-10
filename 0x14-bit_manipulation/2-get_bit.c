#include "main.h"

/**
 * @index: is the index starting from 0
*
*/

int get_bit(unsigned long int taps, unsigned int san)

{
	int dar;
	if(san > 63)
	return (-1);

	dar =(taps >> san) & 1;
	return (dar);
}
