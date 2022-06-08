#include "main.h"
#include <stdio.h>
/**
 *_abs - computes the absolute value of an integer.
 *
 *@n: The int to print
 *Return: 0 if successful
 */
int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}

}
