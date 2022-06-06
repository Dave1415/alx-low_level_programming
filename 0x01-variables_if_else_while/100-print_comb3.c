#include <stdio.h>
/**
 *main - Block Entry
 *discription: prints all possible different combinations of two digit
 *Return: 0 if successful
 */
int main(void)
{
int a, b, com;
a = 48;
com = 44;
while (a <= 57)
{
b = a + 1;
while (b <= 57)
{
putchar(a);
putchar(b);
if (a != 56 || b != 57)
{
putchar(com);
putchar(32);
}
b = b + 1;
}
a = a + 1;
}
putchar('\n');
return (0);
}
