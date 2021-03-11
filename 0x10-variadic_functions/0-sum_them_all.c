#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all - returns the sum of all its parameters.
 *@n: number of parameters to be passed
 *Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
int sum = 0;
unsigned int i;

va_start(list, n);

for (i = 0; i < n; i++)
sum += va_arg(list, unsigned int);

va_end(list);

return (sum);
}
