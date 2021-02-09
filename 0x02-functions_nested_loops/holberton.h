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
 * print_alphabet - print lowercase alphabet
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - print the alphabet 10x
 */
void print_alphabet_x10(void);
/**
 *_islower - check for lowercase characters
 *@c: the character to print
 *Return: return 1 if lowercase and 0 if otherwise
 */
int _islower(int c);
/**
 *int _isalpha - check for alphabet
 *@c: the character to print
 *Return: return 1 if letter,lowercase or uppercase and 0 else otherwise
 */
int _isalpha(int c);
#endif
