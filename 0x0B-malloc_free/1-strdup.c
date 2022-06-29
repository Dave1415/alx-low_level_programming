#include "main.h"
#include <stdlib.h>
/**
 *_strdup - a function that returns a pointer to a newly allocated space in memory
 *@str: pointer to string being duplicated
 *Return: NULL if the string is NULL and memory is insufficent
 */
char *_strdup(char *str)
{
char *copy;
unsigned int len, i;
/*check is the str is NULL*/
if ( str == NULL)
{
return (NULL);
}
len = 0;
while (str[len] != '\0')
{
len++;
}
copy = malloc(sizeof(char) * (len + 1));
/*check if malloc is successful*/
if (copy == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
copy[i] = str[i];
copy[i] = '\0';
}
return (copy);
}
