#include "lists.h"
/**
* free_listint2 - frees the list and puts the head to NULL
* @head: listint_t ** - pointer to pointer of the head of
* the list
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		tmp = *head;
	}
	head = NULL;
}
