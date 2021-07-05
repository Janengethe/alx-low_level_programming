#include "holberton.h"

/**
 *_isdigit - checks for a digit
 *@c: integer to print
 *Return: return 1 if a digit0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
