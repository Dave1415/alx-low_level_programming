#include <stdio.h>
#include "main.h"
/**
 *main - print the name of the program
 *@argc: number of argument
 *@argv: array of argument
 *Return: Always 0 for success
 */
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", *argv);
return (0);
}
