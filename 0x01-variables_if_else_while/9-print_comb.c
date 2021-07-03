#include <stdio.h>

/**
 *main - print combination of all single-digit numbers using putchar
 *Return: always return 0 (success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
