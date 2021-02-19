#include "holberton.h"

/**
 *rot13 - encodes a string using rot13
 *@s: string
 *Return: nothing
 */
char *rot13(char *s)
{
int one[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
	       'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	       'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
	       'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
	       'W', 'X', 'Y', 'Z'};
int two[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
	       'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	       'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	       'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
	       'J', 'K', 'L', 'M'};
int i, length;

for (length = 0; s[length] != '\0'; length++)
{
while (one[i] != '\0' && s[length] != one[i])
i++;
{
if (s[length] == one[i])
s[length] = two[i];
}
}
return (s);
}
