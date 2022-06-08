#include "main.h"
/**
 *main - Block Entry
 *discription: prints the alphabet, in lowercase, followed by a new line.
 *Return: 0 Always
 */
void print_alphabet(void)
{
char ch;
int n;
n = 0;
while (a < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
n++;
}
}
