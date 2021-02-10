#include "holberton.h"
/**
 *print_alphabet_x10 - prints alphabet 10X
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
char l;
int j;
j = 0;
while (j <= 10)
{
l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar(10);
j++;
}
}
