#include "lists.h"
/**
* delete_nodeint_at_index- delete the new node at index
* @head: listsint_t** - pointer to pointer to the head node
* @index: unsigned int - index at which to delete the node
* Return: int - return 1 if sucess else -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *deleted_node;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		deleted_node = (*head);
		(*head) = (*head)->next;
		free(deleted_node);
		return (1);
	}

	i = 0;
	tmp = (*head);
	while (tmp != NULL)
	{
		if (i == index - 1)
		{
			deleted_node = tmp->next;
			tmp->next = deleted_node->next;
			free(deleted_node);
			return (1);
		}

		i++;
		tmp = tmp->next;
	}
	return (-1);
}
