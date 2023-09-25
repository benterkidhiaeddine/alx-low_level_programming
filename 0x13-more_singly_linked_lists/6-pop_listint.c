#include "lists.h"
/**
* pop_listint - function that deletes the head node of
* the linked list and return the number contained in it
* @head: listint_t **
* Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int number;

	if (head == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	number = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (number);
}
