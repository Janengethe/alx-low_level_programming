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
 * free_everything - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void free_everything(char **string, int i)
{
for (; i > 0;)
free(string[--i]);
free(string);
}

/**
 * strtow - splits string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
int total = 0, i = 0, j = 0, length = 0;
char **words, *found_word;
if (str == 0 || *str == 0)
return (NULL);
total = no_words(str);
if (total == 0)
return (NULL);
words = malloc((total + 1) * sizeof(char *));
if (words == 0)
return (NULL);
for (; *str != '\0' &&  i < total;)
{
if (*str == ' ')
str++;
else
{
found_word = str;
for (; *str != ' ' && *str != '\0'; str++)
{
length++;
}
words[i] = malloc((length + 1) * sizeof(char));
if (words[i] == 0)
{
free_everything(words, i);
return (NULL);
}
for (; *found_word != ' ' && *found_word != '\0'; found_word++)
{
words[i][j] = *found_word;
j++;
}
words[i][j] = '\0';
i++;
j = 0;
length = 0;
str++;
}
}
return (words);
}
