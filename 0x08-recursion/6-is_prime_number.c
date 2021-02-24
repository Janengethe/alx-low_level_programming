#include "holberton.h"

/**
 * prime - recursively divide by higher divisor, skip even nums
 * @n: number to check if prime
 * @d: divisor
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int prime(int n, int d)
{
if (n == d)
{
return (1);
}

else if (n % d == 0)
{
return (0);
}

else
{
return (prime(n, d + 1));
}
}

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

else
{
return (prime(n, 2));
}
}
