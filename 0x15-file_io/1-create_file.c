#include "holberton.h"

/**
 *create_file - creates a file
 *@filename: file name to create
 *@text_content: null terinates string to write to file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, fwrite, i;

if (filename == NULL)
return (-1);

if (text_content == NULL)
return (1);

fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

for (i = 0; text_content[i] != '\0'; i++)
;

fwrite = write(fd, text_content, i);
if (fwrite == -1 || fwrite != i)
return (-1);

close(fwrite);
return (1);
}
