#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry code
 *discription: print the last digit
 *
 *Return: Always 0.
 */
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes here */
last = n % 10;
if (last > 5)
printf("Last digit of %d is %d
 and greater than 5\n", n, last);
else if(last == 0)
printf("Last digit of %d is %d and is 0\n", n, last);
else if (last < 6)
printf("Last digit of %d id %d and is less than 6 not 0\n" n, last);
return 0;
}	     
     
