#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the number of argument
 *@argc: argument count
 *@argv: argument vector for value
 *Return: Always to 0
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
else
{
printf ("error\n");
return (1);
}
return (0);
}
 
