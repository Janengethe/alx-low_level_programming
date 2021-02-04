#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *Description - uses a printf
 *Return: return is an integer
 */
/*betty style doc for function main goes there */
int main(void)
{
int n;
{
printf("enter the number n:");
}
scanf("%d", $n);
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
return (0);
}
