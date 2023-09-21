#include "lists.h"
/**
* print_list - function that prints allt the strings in the list
* @h: list_t * - pointer to the head of the list
* Return: size_t - returns the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t number_of_nodes;

	number_of_nodes = 0;
	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", tmp->len, tmp->str);
		}
		number_of_nodes++;
	}
	return (number_of_nodes);

}
