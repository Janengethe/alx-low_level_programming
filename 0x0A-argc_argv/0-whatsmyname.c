#include <stdio.h>

/**
 *main - prints name of the origram followed by \n
 *@argc: variable
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
