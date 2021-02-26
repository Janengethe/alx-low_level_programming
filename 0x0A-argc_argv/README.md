## 0x0A. C - argc, argv


## 0-whatsmyname.c
* This program prints its name, followed by a new line.
* If you rename the program, it will print the new name, without having to compile it again
* Does not remove the path before the name of the program


## 1-args.c
* This program prints the number of arguments passed into it.
* The program print a number, followed by a new line


## 2-args.c
* The program prints all arguments it receives.
* All arguments are printed, including the first one
* Only print one argument per line, ending with a new line


## 3-mul.c
* The program multiplies two numbers.
* It also prints the result of the multiplication, followed by a new line
* Assumes that the two numbers and result of the multiplication are stored in an integer
* If the program does not receive two arguments, the program print Error, followed by a new line, and return 1


## 4-add.c
* The program adds positive numbers.
* Prints the result, followed by a new line
* If no number is passed to the program, prints 0, followed by a new line
* If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
* Assumes that numbers and the addition of all the numbers can be stored in an int


## 100-change.c
* The program prints the minimum number of coins to make change for an amount of money.
* Usage: ./change cents
* where cents is the amount of cents you need to give back
* if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
* uses atoi to parse the parameter passed to your program
* If the number passed as the argument is negative, prints 0, followed by a new line
* You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent