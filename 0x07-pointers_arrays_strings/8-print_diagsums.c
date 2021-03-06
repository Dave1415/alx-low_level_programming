#include <stdio.h>
#include "main.h"
/**
 *print_diagsums - prints the sum of the two diagonals of a square
 *@a: int
 *@size: int
 */
void print_diagsums(int *a, int size)
{
int i, sd1, sd2;
sd1 = 0;
sd2 = 0;
i = 0;
while (i < size)
{
sd1 = sd1 + *(a + i * size + i);
sd2 = sd2 + *(a + i * size + size -i - 1);
i++;
}
printf("%d, %d\n", sd1, sd2);
}
