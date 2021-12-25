#include "lists.h"
#include <stdio.h>

/**
 *print all the element ofa dlistint_t list by print_dlistint
 *@h: pointer to the start of the linked list
 *
 *return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
  size_t i;

  for (i = 0; h != NULL; i++)
    {
      printf("%d\n", h->n);
      h = h->next;
    }
  return (i);
}
