#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: the pointer that points to the struct.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
unsigned int nodes = 0;
while (h)
{
printf("[%u]", h->len);
if (h->str == NULL)
{
printf("(nil)\n");
}
else
{
printf("%s\n", h->str);
}
h = h->next;
nodes++;
}
return (nodes);
}
