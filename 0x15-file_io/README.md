## C - File I/O


### Requirements
* files will be compiled on Ubuntu 14.04 LTS
* programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* coding style: [Betty Style](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)


#### Tip:
> always prefer using symbolic constants (POSIX) vs numbers when it makes sense.
> For instance read(STDIN_FILENO, ... vs read(0, ...


### File Description
0. a function that reads a text file and prints it to the POSIX standard output
1. a function that creates a file
2. a function that appends text at the end of a file
3. a program that copies the content of a file to another file
4.  program that displays the information contained in the ELF header at the start of an ELF file < advance >


### Links
* [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
* [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=dP3N8g7h8gY)

### manual pages
* open
* close
* read
* write
* dprintf


#### Author
> Jane Ng'ethe