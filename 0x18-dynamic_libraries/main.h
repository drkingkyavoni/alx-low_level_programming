#ifndef DYNAMIC_LIB_H
#define DYNAMIC_LIB_H

/**
 * _putchar - function puts char
 *
 * @c: char
 * Return: int
 */
int _putchar(char c);

/**
 * _islower - function checks if string is lower
 *
 * @c: int
 * Return: int
 */
int _islower(int c);

/**
 * _isalpha - function checks if c is alpha
 *
 * @c: int
 * Return: int
 */
int _isalpha(int c);

/**
 * _abs - function for absolute value
 *
 * @n: int
 * Return: int
 */
int _abs(int n);

/**
 * _isupper - function returns upper of a char
 *
 * @c: int
 * Return: int
 */
int _isupper(int c);

/**
 * _isdigit - function checks if c is digit
 *
 * @c: int
 * Return: int
 */
int _isdigit(int c);

/**
 * _strlen - function that returns len of string
 *
 * @s: char pointer
 * Return: int
 */
int _strlen(char *s);

/**
 * _puts - function that writes a string
 *
 * @s: char pointer
 */
void _puts(char *s);

/**
 * _strcpy - function to copy str
 *
 * @dest: char pointer
 * @src: char pointer
 * Return: char pointer
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - function that converts string to int
 *
 * @s: char pointer
 * Return: int
 */
int _atoi(char *s);

/**
 * _strcat - function concats string
 *
 * @dest: {type}
 * @src: {type}
 * Return: char*
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - function concat string of n
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - function copies string of n
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - function that compares two strings
 *
 * @s1: char pointer
 * @s2: char pointer
 * Return: int
 */
int _strcmp(char *s1, char *s2);

/**
 * _memset - function set memory block
 *
 * @s: char pointer
 * @b: char pointer
 * @n: unsigned int
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - function copies memory block
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - function splits strings
 *
 * @s: char pointer
 * @c: char pointer
 * Return: char pointer
 */
char *_strchr(char *s, char c);

/**
 * _strspn - function a string of split n
 *
 * @s: char pointer
 * @accept: char pointer
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - function breaks a string
 *
 * @s: char pointer
 * @accept: char pointer
 * Return: char pointer
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - function does ....
 *
 * @haystack: char pointer
 * @needle: char pointer
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle);

#endif /* DYNAMIC_LIB_H */
