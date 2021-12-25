#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end - function
 * @head: double pointer to first node in double linked list
 * @n: value of node
 *
 * Return: address of new node or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new_node, *tmp;

  if (head == NULL)
    return (NULL);
  new_node = malloc(sizeof(dlistint_t));
  if (new_node == NULL)
    return (NULL);
  new_node->n = n;
  new_node->next = NULL;
  if (*head == NULL)
    {
      new_node->prev = NULL;
      *head = new_node;
      return (new_node);
    }
  tmp = *head;
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = new_node;
  new_node->prev = tmp;
  return (new_node);
}
