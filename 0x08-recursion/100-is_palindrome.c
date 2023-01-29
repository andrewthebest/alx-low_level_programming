#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int _palindrome(char *s, int len);

/**
 * _strlen_recursion - A function to get the length of the string s
 * @s: string to calculate length
 *
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - A function that checks if s is a palindrome
 * @s: An inpuit string
 *
 * Return: 1 if is string is a palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (_palindrome(s, len));
}

/**
 * _palindrome - function that revese a string
 * @s: An input string
 * @len: the length of s
 *
 * Return: A reverse string
 */
int _palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (_palindrome(s + 1, len - 2));
	else
		return (0);
}
