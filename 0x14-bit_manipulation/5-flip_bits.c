#include "holberton.h"

/**
 *flip_bits - returns the number of bits you would need
 *to flip to get from one number to another
 *@n: number to flip
 *@m: number to convert
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int count = 0;

while (x > 0)
{
count++;
x &= (x - 1);
}
return (count);
}
