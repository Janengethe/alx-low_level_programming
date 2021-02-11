#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 *_isupper - checks for uppercase characters
 *@c: integer to print
 *Return: return 1 if uppercase and 0 if otherwise
 */
int _isupper(int c);

/**
 *_isdigit - checks for a digit
 *@c: integer to print
 *Return: return 1 if a digit0 if otherwise
 */
int _isdigit(int c);

/**
 *mul - to multiply 2 integers
 *@a: integer to use
 *@b: integer to use
 *Return: product of a*b
 */
int mul(int a, int b);

/**
 *print_numbers - print numbers from 0-9
 *Return: 0
 */
void print_numbers(void);

#endif /* _HOLBERTON_H_ */
