#include "main.h"
/**
*print_line - prints the character '_' n times to draw a line
*@n: length of line
*Return: void
*/
void print_line(int n)
{
int times = n;  
for (times = n; times > 0; times--)
{
_putchar('_');
_putchar('\n');
}
}
