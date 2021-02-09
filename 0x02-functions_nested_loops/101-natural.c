#include "holberton.h"
/**
 * _putchar - print sum of multiples of 3 or 5 below 1024
 * Return: 0
 *@c: character to print
 */
int _putchar(char c)
{
int sum;
sum = 0;
for (c = 0; c < 1024; c++)
{
if ((c % 3 == 0) || (c % 5 == 0))
{
sum += c;
}
}
_putchar(sum);
return (0);
}
