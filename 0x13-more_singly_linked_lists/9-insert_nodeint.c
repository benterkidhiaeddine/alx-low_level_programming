#include "lists.h"
/**
* insert_nodeint_at_index - insert the new node at index
* @head: listsint_t** - pointer to pointer to the head node
* @idx: unsigned int - index at which to add the node
* @n: int - number contained in the new node
* Return: listint_t * - refrence to the added node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	i = 0;
	tmp = (*head);
	while (tmp != NULL)
	{
		if (i == idx && idx == 0)
		{
			new_node->next = (tmp);
			tmp = new_node;
			return (new_node);
		}
		else if (i == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}

		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
