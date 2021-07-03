#include <stdio.h>

/**
 *main - entry point
 *Return: returns 0
 */
int main(void)
{
	char alphabet, newline;

	alphabet = 'a';
	newline = '\n';
	while (alphabet <= 'z')
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			alphabet++;
		}
		else
		{
			putchar (alphabet);
			alphabet++;
		}
	}
	putchar (newline);
	return (0);
}
