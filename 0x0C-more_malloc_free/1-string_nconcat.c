#include "main.h"
/**
* _strlen - gets the length of a giver string excluding '\0'
* @s: pointer to the first char in the string.
* Return: void
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
* string_nconcat - concats n chars of string 2 to string 1
* @s1: char* - string that we are going to conact to
* @s2: char* - string that we are going to pull n chars from
* @n: unsigned int - number of chars to pull from string 2
* Return: pointer to char of result
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, t_len, i, tracker;
	char *result;

	if (s1 == NULL)
		s1_len = 0;
	else
		s1_len = _strlen(s1);
	if (s2 == NULL)
		s2_len = 0;
	s2_len = _strlen(s2);

	/*make sure n can't exceed s2_len*/
	if (n > s2_len)
		n = s2_len;
	t_len = s1_len + n;
	result = malloc(sizeof(char) * t_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	tracker = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
		tracker++;
	}
	i = 0;
	while (i < n)
	{
		result[tracker] = s2[i];
		i++;
		tracker++;
	}
	result[tracker] = '\0';
	return (result);
}

