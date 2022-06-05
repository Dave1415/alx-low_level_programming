#include <studio.h>
/**
 *main - block entry
 *Discription: print all letter except e and q
 *return: 0 
 */
int main(void)
{
char low;
for (low = 'a'; low = 'z'; low++)
if (low != 'e' && low != 'q')
putchar(low);
return (0);
}
  
