#include "holberton.h"
/**
 *print_number - prints an integer
 *@n: integer to print
 *Return: always 0
 */
void print_number(int n)
{
int k = 1, i = 0, j = 0;
if (n < 0)
{
_putchar('-');
n = -n;
}
while (n / k != 0)
{
k *= 10;
i++;
}
k = k / 10;
while (j < i)
{
_putchar('0' + n / k);
n = n - (n / k) *k;
k = k / 10;
j++;
}
if (i == 0)
_putchar('0' + n);
}
