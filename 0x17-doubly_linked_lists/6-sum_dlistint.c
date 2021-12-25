#include "lists.h"

/**
 * sum_dlistint - summ of dlistint_t link list
 * @head: head pointer to double linked list
 *
 * Return: sum of  value
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
