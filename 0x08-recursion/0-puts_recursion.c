#include "main.h"
/**
 *_puts_recursion - print a string followed by anew line
 *@s: string
 *Return: no return
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(++s);
}
