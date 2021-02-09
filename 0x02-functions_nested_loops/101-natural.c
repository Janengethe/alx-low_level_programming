#include "holberton.h"
/**
 * _putchar - print sum of multiples of 3 or 5 below 1024
 * Return: 0
 *@c: character to print
 */
int _putchar(char c)
{
char c = '0';
int sum = 0;
while (c < 1024)
{
if (c % 3 == 0 || c % 5 == 0)
{
sum += c;
}
c++;
}
_putchar(sum);
return (0);
}
