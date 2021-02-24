#include "holberton.h"

/**
 * _match_of_substring - check if a substring after wildcard matches s1
 * @s1: one string
 * @s2: one string
 * @a_wildcard: placeholder for position right after wildcard
 * Return: 1 if matched, 0 if not
 */

int _match_of_substring(char *s1, char *s2, char *a_wildcard)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s1 == '\0' && *s2 == '*')
return (_match_of_substring(s1, s2 + 1, s2 + 1));

if (*s1 == '\0' && *s2 != '\0')
return (0);

if (*s2 == '*')
return (_match_of_substring(s1, s2 + 1, s2 + 1));

if (*s1 == *s2)

return (_match_of_substring(s1 + 1, s2 + 1, a_wildcard));

else
return (_match_of_substring(s1 + 1, a_wildcard, a_wildcard));
}

/**
 * wildcmp - compare if string with wildcard mattches
 * @s1: one string
 * @s2: one string
 * Return: 1 if matched, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

else if (*s2 == '*')
return (_match_of_substring(s1, (s2 + 1), (s2 + 1)));

else
return (0);
}
