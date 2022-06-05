#include <stdio.h>
/**
 *main - block Entry
 *Discription:prints all single digit numbers, followed by a new line.
 *Return: 0 if successful
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
printf("%d", n);
putchar('\n');
return (0);
}
