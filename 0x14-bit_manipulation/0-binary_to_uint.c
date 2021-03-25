#include "holberton.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to a string of 0 and 1 chars
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0, power = 1;
unsigned int decimal = 0;

if (b == NULL)
return (0);

while (b[i] != '\0')
i++;
i -= 1;

while (i >= 0)
{

if ((b[i] != '0') && (b[i] != '1'))
return (0);

if (b[i] == '1')
decimal += power;
power *= 2;
i--;
}
return (decimal);
}
