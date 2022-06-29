#include "main.h"
#include <stdio.h>
#include <stdlib>
/**
 *main - add pothetive number
 *@argc: argument count
 *@argv: argument variable
 *Return: 0 for success
 */
int main(int argc, char *argv[])
{
int i, j, sum;
sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < 47 || argv[i][j] > 57)
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[i]);
}
printf("%d", sum);
return (0);
}
