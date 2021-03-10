#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - adds two integers
 *@a: integer
 *@b: integer
 *Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}


/**
 *op_sub - subtracts two integers
 *@a: integer
 *@b: integer
 *Return: the difference
 */
int op_sub(int a, int b)
{
return (a - b);
}


/**
 *op_mul - multiplies two integers
 *@a: integer
 *@b: integer
 *Return: product
 */
int op_mul(int a, int b)
{
return (a * b);
}


/**
 *op_div - divide two integers
 *@a: integer
 *@b: integer
 *Return: division
 */
int op_div(int a, int b)
{
return (a / b);
}


/**
 *op_mod - remainder of the division
 *@a: integer
 *@b: integer
 *Return: remainder
 */
int op_mod(int a, int b)
{
return (a % b);
}
