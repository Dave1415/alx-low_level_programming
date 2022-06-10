#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *Return: 0 if successful 
 */
void more_numbers(void)  
{
char i;
int counter;
for (counter = 1; counter <= 10; counter++)
{
for (i = 1; i <= 14; i++)
{
if (i / 10 > 0)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
} 
