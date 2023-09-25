#include "lists.h"
/**
* listint_len - function that returns the size of the list
* in the linked list
* @h: const listint_t - pointer to the head of the linked list
* Return: size_t - the size of linked list
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t size;

	size = 0;
	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		size++;
	}
	return (size);
}
