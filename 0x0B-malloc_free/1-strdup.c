#include "main.h"
#include <stdlib.h>
/**
* _strdup - creates a duplicate of a string we pass to it
* @str: the string that we want to make a copy of
* Return: char* the pointer to the duplicated string
*/
char *_strdup(char *str)
{
	char *new_string;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;

	new_string = malloc(sizeof(char) * len);
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new_string[i] = str[i];
	}
	return (new_string);
}
