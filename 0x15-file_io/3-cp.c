#include "holberton.h"

/**
 * __exit - prints error messages and exits with exit value
 * @error: num is either exit value or file descriptor
 * @s: str is a name, either of the two filenames
 * @fd: file descriptor
 * Return: 0 on success
 **/
int __exit(int error, char *s, int fd)
{
switch (error)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(error);
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
exit(error);
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
exit(error);
case 100:
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(error);
default:
return (0);
}
}
/**
 *main - print to command line
 *@argc: arguments
 *@argv: array of argc
 *Return: 0
 */
int main(int argc, char *argv[])
{
int file_from, file_to, n_read, n_write;
char buffer[BUFSIZ];

if (argc != 3)
__exit(97, NULL, 0);

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
__exit(98, argv[1], 0);

file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
if (file_to == -1)
__exit(99, argv[2], 0);

while ((n_read = read(file_from, buffer, BUFSIZ)) != 0)
{
if (n_read == -1)
__exit(98, argv[1], 0);

n_write = write(file_to, buffer, n_read);
if (n_write == -1)
__exit(99, argv[2], 0);
}

close(file_to) == -1 ? (__exit(100, NULL, file_to)) : close(file_to);
close(file_from) == -1 ? (__exit(100, NULL, file_from)) : close(file_from);
return (0);
}
