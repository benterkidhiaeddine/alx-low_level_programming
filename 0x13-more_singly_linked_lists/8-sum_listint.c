#include "lists.h"
/**
* sum_listint - function that returns the sum of all nodes in
* the list
* @head: listint_t* - pointer to the head node
* Return: int
*/
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
