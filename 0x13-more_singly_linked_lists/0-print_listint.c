#include "lists.h"
/**
* print_listint - function that prints all the numbers
* in the linked list
* @h: const listint_t - pointer to the head of the linked list
* Return: size_t - the size of linked list
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t size;

	size = 0;
	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		printf("%d\n", tmp->n);
		size++;
	}
	return (size);
}
