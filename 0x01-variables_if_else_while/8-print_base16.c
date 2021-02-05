#include <stdio.h>
/**
 *main - entry point
 *Return: always 0
 */
int main(void)
{
char a;
a = '0';
while (a <= 9)
{
putchar(a + '0');
a++;
}
a = 'a';
while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
