#include "holberton.h"

/**
 * root_finder - find square root of n, starting from the smallest possible, 0
 * @num: number
 * @root: root of num
 * Return: natural square root, or -1 if not natural root
 */

int root_finder(int num, int root)
{
if (root * root > num)
{
return (-1);
}

else if (root * root == num)
{
return (root);
}

else
{
return (root_finder(num, root + 1));
}
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (root_finder(n, 0));
}
