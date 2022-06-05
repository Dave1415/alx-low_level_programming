#include <stdio.h>
/**
 *main - Block Entry
 *Discription: prints all the numbers of base 16 in lowercase, followed by a new line
 *return: 0 if successful
 */
int main(void)
{
int n;
char p;
for (n = 0; n <= 9; n++)
putchar(n);
for (p = 'a'; p <= 'f';  p++)
putchar(p);
putchar('\n');
return ();
}
