#include "main.h"
/**
 *main - Block Entry
 *discription: prints the alphabet, in lowercase, followed by a new line.
 *Return: 0 if successful
 */
void print_alphabet(void)
{
char al;
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
_putchar('\n');
}
