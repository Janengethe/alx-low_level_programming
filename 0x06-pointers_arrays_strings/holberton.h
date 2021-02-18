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
 *_strcat - concatenates two strings null-terminated
 *@dest: string
 *@src: string
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);

/**
 *_strncat - concatenates two strings not null-terminated
 *@dest: string
 *@src: string
 *@n: ineger to use
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 *_strncpy - copies a string
 *@dest: string
 *@src: string
 *@n: integer to use
 *Return: a pointer to string
 */
char *_strncpy(char *dest, char *src, int n);

/**
 *_strcmp - compares strings
 *@s1: string character
 *@s2: string character
 *Return: a pointer to string
 */
int _strcmp(char *s1, char *s2);

/**
 *reverse_array - reverses the content of an array of integer
 *@a: pointer to integer
 *@n: number of elements in array
 *Return: nothing
 */
void reverse_array(int *a, int n);

/**
 *string_toupper - changes all lowercase in string to uppercase
 *Return: nothing
 */
char *string_toupper(char *);

/**
 *cap_string - capitalizes letters in string
 *Return: nothing
 */
char *cap_string(char *);

/**
 *leet - encodes a string into 1337
 *Return: nothing
 */
char *leet(char *);

/**
 *rot13 - encodes a string using rot13
 *Return: nothing
 */
char *rot13(char *);

#endif /*_HOLBERTON_H_*/
