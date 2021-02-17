#include "holberton.h"

/**
 * _atoi - converts a string into an integer
 * @s: string to convert
 * Return: int containing the converted number
 */
int _atoi(char *s)
{
int index, ind2;
unsigned int res;
int sign = 1;
char now;
index = 0;
res = 0;
while (*(s + index) != '\0')
{
now = *(s + index);
if (now == '-')
{
sign *= -1;
}
if (now >= '0' && now <= '9')
{
ind2 = index;
while (*(s + ind2) > 47 && *(s + ind2) < 58)
{
res = (res * 10) + *(s + ind2) - '0';
ind2++;
}
break;
}
index++;
}
if (sign < 0)
res *= sign;
return (res);
}
