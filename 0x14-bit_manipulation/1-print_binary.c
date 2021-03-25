#include "holberton.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int n_copy = n;
int len = 0;

while (n_copy > 0)
{
len++;
n_copy >>= 1;
}
len -= 1;

while (len >= 0)
{
if ((n >> len) &1)
_putchar('1');

else
_putchar('0');
len--;
}
}
