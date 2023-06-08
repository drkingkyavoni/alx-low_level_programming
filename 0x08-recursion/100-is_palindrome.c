#include "main.h"


/**
 * _strlen - counts length of string
 * @s: char pointer
 * Return: int
*/
int _strlen(char *s)
{
	char *_s = s;
	while (*s) s++;
	return (int)(s - _s);
}

/**
 * test_palindrome - checks if string is palindrome
 * @s: const char pointer
 * @start: int
 * @last: int
 * Return: int
*/
int test_palindrome(const char *s, int start, int last)
{
	if (start >= last) return (1);
	if (s[start] != s[last]) return (0);
	return (test_palindrome(s, start + 1, last - 1));
}

/**
 * is_palindrome - checks if string s is palindrome
 * Return: int
*/
int is_palindrome(char *s)
{
	if (test_palindrome(s, 0, _strlen(s) - 1)) return 1;
	return (0);	
}
