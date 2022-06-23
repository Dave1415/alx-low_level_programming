#include "main.h"
/**
 *_strlen_recursion - returns the length of string
 *@s: string
 *Return: the length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
/**
 *comparator - compares eache character of the string
 *@s: string
 *@n1: smallest iterator
 *@n2: smallest iterator
 *Return: .
 */
int comparator(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + comparator(s, n1 +1, n2 - 1));
}
return (0);
}
/**
 *is_palindrome - deetects if a string is plindrome.
 *@s: string
 *Return: 1 if s is plaindrome, 0 if not
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (compartor(s, 0, _strlen_recursion(s) - 1));
}
