#include "lists.h"
/**
* add_nodeint - function that add new node at the beggining of the list
* @head: listint_t ** - pointer to pointer of the head node
* @n: const int - number to be added in the node
* Return: listint_t * - pointer to the new node added
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
