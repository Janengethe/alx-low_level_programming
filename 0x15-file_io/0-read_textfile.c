#include "holberton.h"

/**
 *read_textfile - reads a text file and
 *prints it to the POSIX standard output
 *@filename: file pointer
 *@letters: number of letters it should read and print
 *Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t fread, fwrite;
char *buffer;

if (filename == NULL)
return (0);

/*open file*/
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

/*malloc buffer*/
buffer = (char *)malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

/*read file*/
fread = read(fd, buffer, letters);
if (fread == -1)
{
free(buffer);
close(fread);
return (0);
}

/*write file*/
fwrite = write(STDOUT_FILENO, buffer, fread);
if (fwrite == -1)
{
free(buffer);
close(fd);
return (0);
}

close(fd);
return (fread);
}
