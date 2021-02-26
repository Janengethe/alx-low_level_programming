#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies 2 numbers
 *@argc: argument
 *@argv: array
 *Return: 0 and 1 for error
 */
int main(int argc, char *argv[])
{
if (argc < 3)
{
printf("Error\n");
return (1);
}

else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
