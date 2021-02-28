#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds positive numbers
 *@argc: arguments
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i, n, m;

if (argc == 1)
{
printf("0\n");
}
for (i = 0; i < argc; i++)
{
for (n = 0; n < argv[i][n]; n++)
{
if (isdigit(argv[i][n]) == 0)
{
printf("Error\n");
return (1);
}
}
m += atoi(argv[n]);
}
printf("%d\n", m);
return (0);
}
