#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strlen - gets the length of a giver string excluding '\0'
* @s: pointer to the first char in the string.
* Return: int - size of str
*
*/
int _strlen(char *s)
{
	int size;

	size = 0;
	while (*s != '\0')
	{
		size++;
		s = s + 1;
	}
	return (size);
}
/**
* str_concat - add the contents of string s2 to string s1
* @s1: char* - points to the first string
* @s2: char* - points to the second string
* Return: char* - points to the new string that wholds the result
*/
char *str_concat(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	char *result_string;
	int i;

	if (s1 == NULL)
		len_s1 = 0;
	else
		len_s1 = _strlen(s1);
	if (s2 == NULL)
		len_s2 = 0;
	else
		len_s2 = _strlen(s2);
	result_string = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (result_string == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (len_s1 != 0)
	{
		while (*s1 != '\0')
		{
			result_string[i++] = *(s1++);
		}

	}
	if (len_s2 != 0)
	{
		while (*s2 != '\0')
		{
			result_string[i++] = *(s2++);
		}
	}
	return (result_string);

}

