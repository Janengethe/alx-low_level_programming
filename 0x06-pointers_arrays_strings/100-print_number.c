#include "holberton.h"

/**
 *print_number - prints an integer without using long
 *@n: integer
 *You can only use _putchar function to print
 *You are not allowed to use long
 *You are not allowed to use arrays or pointers
 *You are not allowed to hard-code special values
 *Return: nothing
 */
void print_number(int n)
{
unsigned int i = 0;

if (n < 0)
{
_putchar('-');
n = -n;
}
i = n;
if (i / 10)
print_number(i / 10);
_putchar(i % 10 + '0');
}
