#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *Return: 0 if successful 
 */
void more_numbers(void)  
{
char i;
int cou;
for (cou = 1; cou <= 10; cou++)
{
for (i = 1; i <= 10; i++)
{
if (i / 10 > 0)
_putchar((i / 10) + '0');
}
_putchar('\n');
}
