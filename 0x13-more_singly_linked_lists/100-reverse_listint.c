#include "lists.h"
/**
* reverse_listint - function that reverses a linked list in place
* @head: listint_t **
* Return: listint_t * pointer the first node of the reverse list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;


	if (head == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	prev = *head;
	next = (*head)->next;
	*head = next;
	prev->next = NULL;
	while (next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		*head = next;
	}
	*head = prev;
	return (*head);
}
