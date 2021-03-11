#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prints strings
 *@separator: string between strings
 *@n: number of strings
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list strings;

va_start(strings, n);

for (i = 0; i < n; i++)
{
s = va_arg(strings, char *);

if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}

if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}

va_end(strings);
printf("\n");
}
