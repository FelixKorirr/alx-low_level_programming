#include <stdio.h>
#include "main.h"

/**
 * is_length - function that return length of string
 * @s: string
 * 
 * Return: Length of string
 * korir codes
 */

int is_length(char *s)
{
	if(*s == '\0')
		return (0);
	else
		return (1 + is_length(s + 1));
}

/**
 * check_palindrome - checks the characters recursively
 * @s: string to check
 * @a: iterator
 * @length : length of the string
 *
 * Return: 1 if palindrome, otherwise 0
 * korir codes
 */
int check_palindrome(char *s, int a, int length)
{
	if (*(s + a) != *(s + length - 1))
		return (0);
	if (a >= length)
		return (1);
	return (check_palindrome(s, a + 1, length - 1));
}


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is palindrome, otherwise 0
 * korir codes
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, is_length(s)));
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
