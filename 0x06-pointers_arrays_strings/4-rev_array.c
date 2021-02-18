#include "holberton.h"

/**
 *reverse_array - reverses the content of an array of integer
 *@a: pointer to integer
 *@n: number of elements in array
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
int start, end, tmp;
start = 0;
end = n - 1;
while (start < end)
{
tmp = *(a + start);
*(a + start) = *(a + end);
*(a + end) = tmp;
start++;
end--;
}

}
