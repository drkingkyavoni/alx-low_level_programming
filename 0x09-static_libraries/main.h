#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - put char
 * @c: char parameter
 * Return: int
 */
int _putchar(char c);

/**
 * _islower - test is lower
 * @c: char parameter
 * Return: int
 */
int _islower(int c);

/**
 * _isalpha - test is alpha
 * @c: char parameter
 * Return: int
 */
int _isalpha(int c);

/**
 * _abs - returns absolute
 * @n: char parameter
 * Return: int
 */
int _abs(int n);

/**
 * _isupper - returns upper
 * @c: int parameter
 * Return: int
 */
int _isupper(int c);

/**
 * _isdigit - put char
 * @c: char parameter
 * Return: int
 */
int _isdigit(int c);

/**
 * _strlen - put char
 * @s: char parameter
 * Return: int
 */
int _strlen(char *s);

/**
 * _puts - put char
 * @s: char parameter
 * Return: void
 */
void _puts(char *s);

/**
 * _strcpy - put char
 * @dest: char parameter
 * @src: char parameter
 * Return: char
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - put char
 * @s: char parameter
 * Return: int
 */
int _atoi(char *s);

/**
 * _strcat - put char
 * @dest: char parameter
 * @src: char parameter
 * Return: char
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - put char
 * @dest: char parameter
 * @src: char parameter
 * @n: int parameter
 * Return: char
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - put char
 * @dest: char parameter
 * @src: char parameter
 * @n: int parameter
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - put char
 * @s1: char parameter
 * @s2: char parameter
 * Return: int
 */
int _strcmp(char *s1, char *s2);

/**
 * _memcpy - put char
 * @s: char parameter
 * @b: char parameter
 * @n: unsigned int parameter
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - put char
 * @dest: char parameter
 * @src: char parameter
 * @n: unsigned int parameter
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - put char
 * @s: char parameter
 * @c: char parameter
 * Return: char
 */
char *_strchr(char *s, char c);

/**
 * _strspn - put char
 * @s: char parameter
 * @accept: char parameter
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - put char
 * @s: char parameter
 * @accept: char parameter
 * Return: char
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - put char
 * @haystack: char parameter
 * @needle: char parameter
 * Return: char
 */
char *_strstr(char *haystack, char *needle);

#endif
