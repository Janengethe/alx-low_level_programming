#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - prints numbers
 *@separator: string between numbers
 *@n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;

if (n > 0)
{
va_start(valist, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(valist, unsigned int));

if (separator != NULL)
printf("%s", separator);
}

va_end(valist);
}
printf("\n");
}
