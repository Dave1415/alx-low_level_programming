#inclide "main.h"
/**
 *_puts - print a string
 *@str: string
 *
 *Return: the string
 */
void _puts(char *str)
{
int i = 0;
 while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
_putchar('\n');
}

