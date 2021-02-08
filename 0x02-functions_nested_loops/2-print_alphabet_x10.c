#include "holberton.h"
/**
 *print_alphabet_x10 - prints 10x the alphabet
 *Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
int n = 0, i;
while (n < 10)
{
i = 'a';
while (i <= 'z')
{
_putchar (i);
i++;
}
_putchar ('\n');
n++;
}
return (0);
}
