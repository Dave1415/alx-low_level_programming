#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *main - Block Entry
 *Discription: a program that prints _putchar, followed by a new line.
 *Return: 0 if successful
 */
int _putchar(char c)
{
int main(void)
{
_putchar("_putchar\n");
return (0);
}
return (write(1, &c, 1));
}
