#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: first string
 *@accept: second string
 *Return: pointer to the byte in s that matches one
*/
char *_strpbrk(char *s, char *accept)
{
int j;
while (*s != '\0')
{
j = 0;
while (accept[j] != *s)
{
if (*s == accept[j])
{
return (s);
}
j++;
}
s++;
}
return (0);
}
