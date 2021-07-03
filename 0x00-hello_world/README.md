## 0x00. C - Hello, World

### Reference Materials
* [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/d801279f75de6a982a55d752dfd3632909f720f0.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU65GPZGY3%2F20210703%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20210703T065434Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=609088c0d59214dccc7e949f2c53b78304213c0c722d0fc06fe9b01821cd70ac)
* [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
* [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
* [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
* [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
* [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
* [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
* [Holberton’s Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
* [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21)
* [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus)

* Man/Help `gcc` `printf (3)` `puts` `putchar`

### Betty linter
To run the Betty linter just with command `betty <filename>`:
* Go to the [Betty](https://github.com/holbertonschool/Betty) repository
* Clone the repo to your local machine
* `cd` into the Betty directory
* Install the linter with `sudo ./install.sh`
* `emacs` or `vi` a new file called `betty`, and copy the script below:
```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
* Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
* Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`


### Task Quiz
0. In which category belongs the C programming language? Compiled language
1. What is the common extension for a C source file? .c
2. What is the common extension for a C header file? .h
3. Which command can be used to compile a C source file? gcc
4. Which of the following are both valid comment syntaxes in ANSI C, and Betty-compliant? `/* Comment */`
```
/*
 * Comment
 */
```
5. What are the different steps to form an executable file from C source code. Preprocessing, compilation, assembly, and linking

### Files Descriptions
0. Preprocessor. `0-preprocessor`- a script that runs a C file through the preprocessor and save the result into another file.The C file name will be saved in the variable `$CFILE` The output should be saved in the file `c`
1. Compiler. `1-compiler`- a script that compiles a C file but does not link.The C file name will be saved in the variable `$CFILE` The output file should be named the same as the `C` file, but with the extension `.o` instead of `.c`.
2. Assembler. `2-assembler`- a script that generates the assembly code of a C code and save it in an output file. The output file should be named the same as the C file, but with the extension `.s` instead of `.c`
3. Name. `3-name`- a script that compiles a C file and creates an executable named `cisfun`. The C file name will be saved in the variable `$CFILE`
4. Hello, puts. `4-puts.c`- a C program that prints exactly `\"Programming is like building a multilingual puzzle`, followed by a new line. gcc compilation: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out`
5. Hello, printf. `5-printf.c`- a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line. gcc compilation: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c`
6. Size is not grandeur, and territory does not make a nation. `6-size.c`- a C program that prints the size of various types on the computer it is compiled and run on. gcc compilation: `gcc 6-size.c -m32 -o size32 2> /tmp/32` and `gcc 6-size.c -m64 -o size64 2> /tmp/64`
7. Intel. `100-intel`- a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity. `101-quote.c`- a C program that prints exactly `and that piece of art is useful\" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error. gcc compilation: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c`
9. Executables- `a.out`, `quote`, `size32`, `size64`
10. `main.s`- assembly file
11. `main.o`- object file

#### Author
[Jane Ng'ethe](https://github.com/Janengethe)