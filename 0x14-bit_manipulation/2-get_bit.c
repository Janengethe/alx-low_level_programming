#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: number
 *@index: index of bits
 *Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if ((sizeof(unsigned int long) * 8) < index)
return (-1);

n = n >> index;
return (n & 1);
}
