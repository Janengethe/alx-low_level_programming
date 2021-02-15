#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 *reset_to_98 - takes a pointer to an int and updates to 98
 *@n: pointer integer
 *Return: nothing
 */
void reset_to_98(int *n);

/**
 *swap_int - saps the values of 2 integers
 *@a: integer
 *@b: integer
 *Return: nothing
 */
void swap_int(int *a, int *b);

/**
 *_strlen - returns the length of a string
 *@s: character
 *Return: length of string
 */
int _strlen(char *s);

/**
 *_puts - prints a string to stout
 *@str: character to print
 *Return: nothing
 */
void _puts(char *str);

/**
 *print_rev - prints a string in reverse
 *@s: pointer char
 *Return: nothing
 */
void print_rev(char *s);

/**
 *rev_string - reverses a string
 *@s: pointer character
 *Return: nothing
 */
void rev_string(char *s);

/**
 *puts2 - print characters in a string
 *@str: poiter character
 *Return: nothing
 */
void puts2(char *str);

/**
 *puts_half - prints half of a string
 *@str: character
 *Return: n
 */
void puts_half(char *str);

/**
 *print_array - prints elements of arrays of integers
 *@a: integer
 *@n: integer
 *Return: 0
 */
void print_array(int *a, int n);

/**
 *_strcpy - copies the string
 *@dest: character
 *@src: character
 *Return: 0
 */
char *_strcpy(char *dest, char *src);

/**
 *_atoi - converts a string to an integer
 *@s: character
 *Return: always 0
 */
int _atoi(char *s);

#endif /* _HOLBERTON_H_ */
