#include "holberton.h"
/**
 *print_alphabet_x10 - print alphabet 10x
 *Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
int n = 0, a;
while (n < 10)
{
a = 'a';
while (a <= 'z')
{
_putchar (a);
a++;
}
_putchar ('\n');
}
}
