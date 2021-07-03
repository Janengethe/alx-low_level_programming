#include <stdio.h>

/**
 *main - entry point
 *Return: returns 0
 */
int main(void)
{
	char alphabet, newline;

	alphabet = 'z';
	newline = '\n';
	while (alphabet >= 'a')
	{
		putchar (alphabet);
		alphabet--;
	}
	putchar (newline);
	return (0);
}
