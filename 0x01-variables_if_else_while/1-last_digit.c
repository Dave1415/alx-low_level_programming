#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - print the last digit of a randomly generated number
 *and whether it is greater than 5, less than 6, or 0.
 *
 *Return: Always 0.
 */
int main(void)
{
  int n,
    srand(time(0))
    n = rand() - RAND_MAX / 2;
  /* your code goes here */
  if ((n % 10) > 5)
    {
      printf("Last digit of %d and is greater than 5\n",n, n % 10);
    }
  else
    {
      printf("Last digit of %d and is 0\n",n,n % 10);
    }
  return (0);
}
