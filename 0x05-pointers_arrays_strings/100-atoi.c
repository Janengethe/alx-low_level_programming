#include "holberton.h"

/**
 * _atoi - converts a string into an integer
 * @s: string to convert
 * Return: int containing the converted number
 */
int _atoi(char *s)
{
int index, sign;
unsigned int res;
char now;
sign = 1;
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
while (*(s + index) > 47 && *(s + index) < 58)
{
res = (res * 10) + *(s + index) -'0';
index++;
}
break;
}
index++;
}
if (sign < 0)
{
res *= sign;
}
return (res);
}
