#include "main.h"
#include <stdio.h>
/**
 *main - print the number of argument
 *@argc: argument count
 *@argv: argument vector for value
 *Return: Always to 0
 */
int main(int argc, char *argv[])
{
(void)argv;
argc--;
printf("%d\n", argc);
return (0);
}
