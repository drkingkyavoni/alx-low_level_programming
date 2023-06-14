#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int size, i;
char *temp, *s;

/**
* argstostr - concatenates strings 
* @ac: int
* @av: char pointer
* Return: char pointer
*/
char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return (NULL);
    
    for (i = 0; i < ac; i++)
        size += (strlen(av[i]) + 1);

    temp = (char *)malloc(sizeof(char) * (size + 1));
    if (!temp)
        return (NULL);

    s = temp;
    strcpy(temp, "");
    for (i = 0; i < ac; i++)
    {
        strcat(temp, av[i]);
        strcat(temp, "\n");
    }

    return (s);
}
