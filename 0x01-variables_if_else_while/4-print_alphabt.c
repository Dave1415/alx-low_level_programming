#include <stdio.h>
/**
 *main - Block Entry 
 *Discription: Print all the letters except q and e
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
if (low != 'e' && low != 'q')
putchar(low);
putchar ('\n');
return (0);
}
