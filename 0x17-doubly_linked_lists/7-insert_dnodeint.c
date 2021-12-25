#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 *@h: double pointer to the beginning of the  linked list
 *@idx: index at which to inser the new node
 *@: data to enter into new node
 *
 *return: pointer to the new node, or null on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  dlistint_t *new_node, *next, *val;
  unsigned int i;
  if (h == NULL)
		return (NULL);
  if (idx != 0)
	{
		val = *h;
		for (i = 0; i < idx - 1 && val != NULL; i++)
			val = val->next;
		if (val == NULL)
			return (NULL);
	}
        new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = val;
		next = val->next;
		val->next = new_node;
	}
	new_node->next = next;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
  
