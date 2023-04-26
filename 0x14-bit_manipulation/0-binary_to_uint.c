#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - converts binary to units
 * @b: doc line
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t i;

	if (b == NULL)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] < '0' || b[i] > '1')
	return (0);

	    result = (result << 1) | (b[i] - '0');
	}

return (result);
}
