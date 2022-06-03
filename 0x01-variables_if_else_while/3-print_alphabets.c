#include <stdio.h>
/**
 * main - is n positive and negative
 *
 * Return: 0 if successful
 */
int main(void)
{
char low;
char up;
for (low = 'a'; low <='z'; low++)
{
putchar(low);
}
/* print uppercase letters */
for (up = 'a'; up = 'z'; up++)
{
putchar(up);
}
putchar('\n');
return(0);
}
