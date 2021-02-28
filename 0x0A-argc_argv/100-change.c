#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints min no. of coins to make change for an amount
 *@argc: arguments
 *@argv: array
 *Return: 0
 */

int main(int argc, char *argv[])
{
int i, coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}

if (argv[0][0] == '-')
{
printf("0\n");
}

coins = 0;

/* convert string to int and calculate coins */
i = atoi(argv[1]);
coins += i / 25;

i = i % 25;
coins += i / 10;

i = i  % 10;
coins += i / 5;

i = i % 5;
coins += i / 2;

i = i % 2;
coins += i / 1;

printf("%d\n", coins);

return (0);
}
