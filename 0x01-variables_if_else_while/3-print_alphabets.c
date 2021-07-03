#include <stdio.h>

/**
 *main - entry point
 *Return: is an integer
 */
int main(void)
{
	char alphabet_lowercase, alphabet_uppercase, newline;

	alphabet_lowercase = 'a';
	alphabet_uppercase = 'A';
	newline = '\n';

	while (alphabet_lowercase <= 'z')
	{
		putchar(alphabet_lowercase);
		alphabet_lowercase++;
	}
	while (alphabet_uppercase <= 'Z')
	{
		putchar(alphabet_uppercase);
		alphabet_uppercase++;
	}
	putchar(newline);

	return (0);
}
