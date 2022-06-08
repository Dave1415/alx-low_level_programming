#include <limits.h>
#include "main.h"
/**
 *print_last_digit - prints the last digit of a number.
 *
 *@n: The int to print
 * Return: 0 if successful
 */
int print_last_digit(int n)
{
int ld;
if (n < 0)
{
ld = (-1 * (n % 10));
_putchar(ld + '0');
return (ld);
}
else
{
ld = (n % 10);
_putchar(ld + '0');
return (ld);
}

}
