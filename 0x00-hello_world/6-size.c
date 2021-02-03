#include<stdio.h>
/**
 *main - entry point
 *Return: return is an integer
 */
int main(void)
{
char charType;
int intType;
long int longType;
long long int longlongType;
float floatType;
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
