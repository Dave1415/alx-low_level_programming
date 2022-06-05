#include <stdio.h>
/**
 *main - block entry
 *Discription: print all letter excpet q and e.
 *Return: 0 if successful 
 */
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
if (low != 'e' && low != 'q')
putchar(low);
putchar ('\n');
return (0);
}
