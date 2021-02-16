#include "holberton.h"

/**
 *rev_string - reverses a string
 *@s: character to reverse
 *Return: nothing
 */
void rev_string(char *s)
{
char c;
int i, j, end;
j = 0;
while (s[j] != '\0')
{
j++;
}
end = j - 1;
for (i = 0; i < j / 2; i++)
{
c = s[i];
s[i] = s[end];
s[end--] = c;
}
}
