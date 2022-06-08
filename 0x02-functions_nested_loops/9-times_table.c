#include "main.h"
/**
 *print_times_table - prints the 9 times table, starting with 0
 *
 * Return: 0 if successful
 */
int print_times_table(int n);
{
int a;
int b;
int c;
for (a = 0; a <= 9; a++)
{
for(b = 0; b <= 9; b++)
{
c = a * b;
if ((c / 10) == 0)
{
if (b == 0)
{
_putchr('0');
}
if (b != 0)
{
_putchar(',');
_putchar(' ');
}
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(a / 10  + '0');
_putchar((a % 10) + '0');
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
