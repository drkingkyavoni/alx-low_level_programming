#include "main.h"

int _strlen(char *s)
{
	char *_s = s;
	while (*s) s++;
	return (int)(s - _s);
}

int test_palindrome(const char *s, int start, int last)
{
	if (start >= last) return (1);
	if (s[start] != s[last]) return (0);
	return (test_palindrome(s, start + 1, last - 1));
}

int is_palindrome(char *s)
{
	if (test_palindrome(s, 0, _strlen(s) - 1)) return 1;
	return (0);	
}
