#include "holberton.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: pointer to integers
 *@index: index of bits
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit = 1;
if (n == 0)
return (-1);

if ((sizeof(unsigned int long) * 8) < index)
return (-1);

bit = bit << index;
*n = *n | bit;
return (1);
}
