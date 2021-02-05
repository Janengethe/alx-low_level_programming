#include <stdio.h>
/**
 *main - entry point
 *Return: always 0
 */
int main(void)
{
char a = 0;
while (a < 10)
{
putchar(a + 'o');
a++
}
a = 'a';
while (a <= 'f')
{
putchar(a);
a++
}
putchar('\n');
return (0);
}
