#include "holberton.h"
/**
 *swap_int - swaps integers
 *@a: integer to swap
 *@b: integer to swap
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
int temporary_int;
temporary_int = *a;
*a = *b;
*b = temporary_int;
}
