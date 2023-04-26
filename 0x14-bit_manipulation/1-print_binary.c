#include "main.h"
/**
* print_binary - prints out our binary
* @input_number: takes a number input
*/
void print_binary(unsigned long int input_number)
{
int bit_position, set_bit_count = 0;
unsigned long int current_bit_value;
for (bit_position = 63; bit_position >= 0; bit_position--)
{
current_bit_value = input_number >> bit_position;

if (current_bit_value & 1)
{
_putchar('1');
set_bit_count++;
}
else if (set_bit_count)
{
_putchar('0');
}
}

if (!set_bit_count)
{
_putchar('0');
}
}

