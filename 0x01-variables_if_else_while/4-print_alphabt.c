#include <stdio.h>
/**
 *main - block entry
 *Discription: print all letter except e and q
 *return: 0 Always for succes 
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
