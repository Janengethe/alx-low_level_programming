#include "holberton.h"
/**
 *print_alphabet - print the lower case of alphabets
 *Return: always 0 (success)
 */
void print_alphabet(void)
{
char n = 'a';
while (n <= 'z')
{
_putchar (n);
n++;
}
_putchar ('\n');
return (0);
}
