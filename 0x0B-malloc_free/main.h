#ifndef _MAIN_H_
#define _MAIN_H_

/**
* create_array - creates an array of chars
* @size: unsigned int
* @c: char
* Return: char pointer
*/
char *create_array(unsigned int size, char c);

/**
* _strdup - creates a copy of the string given as a parameter 
* @str: char pointer
* Return: char pointer
*/
char *_strdup(char *str);

/**
* str_concat - concatenates two strings 
* @s1: char pointer
* @s2: char pointer
* Return: char pointer
*/
char *str_concat(char *s1, char *s2);

/**
* alloc_grid - create a 2D array of integers
* @width: int
* @height: int
* Return: int
*/
int **alloc_grid(int width, int height);

/**
* free_grid - setting the grid free 
* @grid: int pointer
* @height: int
* Return: void
*/
void free_grid(int **grid, int height);

/**
* argstostr - concatenates strings 
* @ac: int
* @av: char pointer
* Return: char pointer
*/
char *argstostr(int ac, char **av);

/**
* strtow - split strings into words 
* @str: char pointer
* Return: char pointer
*/
char **strtow(char *str);

#endif /* _MAIN_H_ */
