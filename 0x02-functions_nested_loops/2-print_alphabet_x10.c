#include "holberton.h"
/**
 *print_alphabet_x10 - print alphabet 10x
 *Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
int n = 0;
char a = 'a';
while (n <= 9)
{
while (a <= 'z')
{
_putchar (a);
a++;
}
_putchar ('\n');
n++;
}
}
