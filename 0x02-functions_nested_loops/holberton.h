#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 *print_alphabet - print alphabet in lowercase
 *Return: returns void
 */
void print_alphabet(void)
{
char n = 'a';
while (n <= 'z')
{
_putchar (n);
n++;
}
_putchar ('\n');
return;
}
/**
 *print_alphabet_x10 - prints alphabets 10x
 *Return: return void
 */
void print_alphabet_x10(void)
{
int n = 0, a;
while (n < 10)
{
a = 'a';
while (a <= 'z')
{
_putchar (a);
a++;
}
_putchar ('\n');
n++;
}
return;
}
