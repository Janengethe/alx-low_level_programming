## 0x18. C - Dynamic libraries
> Dynamic Library is a file that is created separately outside of the
> executable file. They are shared libraries and allows different programs
> to run at the same time. These libraries are launched only during
> program execution.

### How to create Dynamic Library
* `gcc *.c -c -fPIC` to create a shared library.
* `gcc *.o -shared -o libal.so`
* `export LD-LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH`
* `gcc -L test_code.c -lhlberton -o test_code` to compile the `test_code.c` file.

### File Descriptions
0. Creating a dynamic library libholberton.so containing functions ie putchar, islower, isalpta etc.
1. Creating a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
2. Creating a dynamic library that contains C functions that can be called from Python.

### Author
* [Jane Ng'ethe](https://www.minds.com/janengethew/)