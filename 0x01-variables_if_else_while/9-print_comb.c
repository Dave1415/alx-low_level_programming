#include <stdio.h>
/**
 *main - Block Entry
 *Discription: prints all possible combinations of single-digit number
 *Return: 0 if successful
 */
int main(void)
{
int n;
n = 0;
for (n = 0; n < 10; n++)
putchar(n % 10 + '0');
if (n <= 8)
putchar(',');
putchar(',');
else
break;
putchar('\n');
return (0);
}
