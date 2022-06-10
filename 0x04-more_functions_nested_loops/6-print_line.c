#include "main.h"
/**
*print_line - prints the character '_' n times to draw a line
*@n: length of line
*Return: void
*/
void print_line(int n)
{
int a = 1;  
while (a <= n)
{
_putchar(95);
a++;
}
_putchar('\n');
}
