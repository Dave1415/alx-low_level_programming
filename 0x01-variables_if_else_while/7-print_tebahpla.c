#include <stdio.h>
/**
 *main - Block Entry
 *Discription: prints the lowercase alphabet in reverse, followed by a new line
 *Return: 0 if successful
 */
int main(void)
{
char n;
for (n = 'z'; n >= 'a'; n--)
putchar(n);
putchar('\n');
return (0);
}
