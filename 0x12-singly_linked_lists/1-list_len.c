#include "lists.h"
/**
* list_len - function that returns the length of the list
* @h: list_t * - pointer to the head of the list
* Return: size_t - returns the number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t number_of_nodes;

	number_of_nodes = 0;
	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		number_of_nodes++;
	}
	return (number_of_nodes);

}
