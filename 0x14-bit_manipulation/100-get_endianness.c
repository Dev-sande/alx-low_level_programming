#include "main.h"
/**
* get_endianness - checks the endianness of the system
*
* Returns 0 if the system is big-endian or 1 if it's little-endian.
*
* num: stores the value 1 in an integer variable.
* t: pointer to determine the byte order of the system.
*
* Return: 0 if big-endian, 1 if little-endian
*/
int get_endianness(void)
{
unsigned int num;
char *t;

num = 1;
t = (char *)&num;

return ((int)*t);
}

