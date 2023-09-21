#include "lists.h"
/**
* free_list - frees the memory given to the list
* @head: list_t * - head of the list
* Return: void
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);

		tmp = head;
	}
}
