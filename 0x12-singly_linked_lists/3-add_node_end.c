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
* add_node_end- add the node with the specifeid string to end
* of the list
* @head: list_t ** - pointer to the pointer of the first node in
* the list
* @str: char * - string of the new node
* Return: adress of the new element , else NULL if failure
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	list_t *tmp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = dup_str;
	new_node->len = _strlen(dup_str);
	new_node->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	return (new_node);
}
