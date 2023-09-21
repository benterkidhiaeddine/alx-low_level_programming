#include "lists.h"
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
* add_node - add the node with the specifeid string to the
* list
* @head: list_t ** - pointer to the pointer of the first node in
* the list
* @str: char * - string of the new node
* Return: adress of the new element , else NULL if failure
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		return (NULL);
	}
	new_node->str = dup_str;
	new_node->len = _strlen(dup_str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
