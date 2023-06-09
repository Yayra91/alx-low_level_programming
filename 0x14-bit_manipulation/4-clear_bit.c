#include "main.h"

/**
* clear_bit - set value of the given bit to 0
* @n: pointer to a number should be changed
* @index: index of a bit should be cleared
*
* Return: -1 for failure, 1 for success
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
