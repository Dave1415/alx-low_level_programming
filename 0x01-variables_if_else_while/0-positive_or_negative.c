#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point 
 *
 *Return : Always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand()-RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zer0\n", n);
if (n < 0)
printf("%d is negative\n", n);
/* your  code goes here */
return  (0);
}
