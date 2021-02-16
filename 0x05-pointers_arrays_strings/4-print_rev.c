#include "holberton.h"
/**
 *print_rev - prints string in reverse
 * @s: pointer to string
 */
void print_rev(char *s)
{
int i;
int j;
int last_char;
i = 0;
while (s[i] != '\0')
{
i++;
}
last_char = i;
j = (last_char - 1);
while (j >= 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
