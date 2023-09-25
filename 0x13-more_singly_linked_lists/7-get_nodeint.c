#include "lists.h"
/**
* get_nodeint_at_index - function that returns the nth node in
* a linked list
* @head: listint_t * - pointer to the head of linked list
* @index: unsigned int - index of node
* Return: listint_t*
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	i = 0;
	tmp = head;
	while (tmp != NULL)
	{
		if (i == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		i++;

	}
	return (NULL);
}
