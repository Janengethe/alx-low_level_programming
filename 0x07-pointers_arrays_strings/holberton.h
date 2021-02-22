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
 *_memset - fills memory with a constant byte
 *@s: pointer to n
 *@b: constant byte
 *@n: bytes of the memory area
 *Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 *_memcpy - copies memory area
 *@dest: destination area
 *@src: sorce area
 *@n: bytes of the memory area
 *Return: a poiter to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 *_strchr - locates a character in a string
 *@s: string
 *@c: character to check
 *Return: pointer to first occurrence of c in string s, or NULL if character is not found
 */
char *_strchr(char *s, char c);

/**
 *_strspn - gets the length of a prefix substring
 *@s: initial segment
 *@accept: bytes
 *Return: no of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 *_strpbrk - searches a string for any of a set of bytes
 *locates the first occurrence in the string s of any of the bytes in the string accept
 *@s: string
 *@accept: string
 *Return: pointer to the byte in s that matches one of the bytes in accept,
 *or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 *_strstr - locates a substring
 *@haystack: main string
 *@needle: substring
 *Return: a  pointer to beginning of located substring, or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle);

/**
 *print_chessboard -prints the chessboard
 *@a: string row
 *Return: nothing
 */
void print_chessboard(char (*a)[8]);

/**
 *print_diagsums -prints the sum of the two diagonals of a square matrix of integers
 *@a: pointer
 *@size: size
 *Return: always 0
 */
void print_diagsums(int *a, int size);

/**
 *set_string -sets the value of a pointer to a char
 *@s: pointer to a poiter to
 *@to: pointer
 *Return: nothing
 */
void set_string(char **s, char *to);

#endif /* _HOLBERTON_H_ */
