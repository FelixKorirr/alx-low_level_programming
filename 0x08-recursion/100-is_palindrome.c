#include "main.h"

int check_pal(char *s, int a, int len)
int _strlen_recursion(char *s)

/**
 * is_palindrome - checks if string is a palindrome
 *@s: string
 * Return: 1 if it is,0 if it's not.
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/*
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
if (*s == '\0'
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters recursively for palindromes
 * @s: string
 * @i: iterator
 * @len: length
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int a, int len)
{
if (*(s + a) != *(s + len - 1))
return (0);
if (a >= len)
return (1);
return (check_pal(s, a + 1, len - 1));
}

