#include "main.h"
/**
 *_strlen - print a string
 *@str: string
 *
 *Return: the string
 */
int _strlen(char *str)
{
int i = 0;
for (str[i] != '\0')
_putchar(str[i]);
i++;
_putchar('\n');
}

