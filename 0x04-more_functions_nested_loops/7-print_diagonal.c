#include "main.h"
/**
 *print_diagonal - print diagonal line
*@n: number of character to draw
*Return: diagonal
 */
void print_diagonal(void)
{
int a, b;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
for (b = 1; b < a; b++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
