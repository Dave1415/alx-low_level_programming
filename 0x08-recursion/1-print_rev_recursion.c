#include "main.h"
/**
 *_print_rev_recursion - function that prints a string in reverse
 *@s: string
 *
 *Retun: 1 if successful
 *on error, -1 is returned 
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
