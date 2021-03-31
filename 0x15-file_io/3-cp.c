#include "holberton.h"

/**
 *main - print to command line
 *@argc: arguments
 *@argv: array of argc
 *Return: 0
 */
int main(int argc, char *argv[])
{
int file_from, file_to, close1, close2, n;
char buffer[BUFSIZ];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
while ((n = read(file_from, buffer, BUFSIZ)) > 0)
{
if (write(file_from, buffer, n) != n)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_from);
exit(99);
}
}
if (n < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
close1 = close(file_from);
close2 = close(file_to);
if (close1 < 0 || close2 < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
