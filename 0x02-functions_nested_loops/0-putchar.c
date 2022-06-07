#include <unistd.h>
/**
 *main - write the character c to stdout
 *Discription: a program that prints _putchar, followed by a new line.
 *Return: 0 if successful
 */
int -putchar(char)
{
putchar("_");
putchar("p");
putchar("u");
putchar("t");
putchar("c");
putchar("h");			   
putchar("a");
putchar("r");
putchar("\n");
 return (write(1 ,&c, 1));
}
