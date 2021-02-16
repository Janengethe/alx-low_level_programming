#include "holberton.h"
/**
 *print_rev - prints string in reverse
 * @s: pointer to string
 */
void print_rev(char *s)
{
int i;
int j;
int end;
i = 0;
while (s[i] != '\0')
{
i++;
}
end = i;
j = (end - 1);
while (j >= 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
