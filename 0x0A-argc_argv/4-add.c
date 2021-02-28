#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argc: arguments
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
}

else
{

for (i = 0; i < argc; i++)
{

if (atoi(argv[i]))
{
sum += atoi(argv[i]);
}

else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
return (0);
}
