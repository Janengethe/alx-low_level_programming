#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * no_words - function to calculate number of words
 * @s: string being passed to check for words
 *
 * Return: number of words
 */
int no_words(char *s)
{
int i, num = 0;

for (i = 0; s[i] != '\0'; i++)
{

if (*s == ' ')
s++;

else
{

for (; s[i] != ' ' && s[i] != '\0'; i++)
s++;
num++;
}
}
return (num);
}
/**
 * strtow - splits string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
int i, j, k, l, m = 0, count = 0;
char **s;

if (str == NULL || *str == '\0')
return (NULL);

m = no_words(str);

if (m == 1)
return (NULL);

s = (char **)malloc(n * sizeof(char *));

if (s == NULL)
return (NULL);

s[m - 1] = NULL;
i = 0;
}
