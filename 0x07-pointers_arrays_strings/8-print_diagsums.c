#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums -prints the sum of the two diagonals of square matrix of int
 *@a: pointer
 *@size: size
 *Return: always 0
 */
void print_diagsums(int *a, int size)
{
int row, primary, secondary, i;
primary = 0;
secondary = 0;
for (row = 0; row < size; row++)
{
i = (row * size) + row;
primary += a[i];
}
for (row = 1; row <= size; row++)
{
i = (row * size) - row;
secondary += a[i];
}
printf("%d, %d\n", primary, secondary);
}
