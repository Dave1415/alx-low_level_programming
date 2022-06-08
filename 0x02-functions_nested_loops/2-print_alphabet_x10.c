#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 *
 *Return: 0 if successful
 */
void print_alphabet_x10(void)
{
int al;
int count;
count = 0;
while (count < 10)
{
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
count++;
_putchar('\n');
}

}
