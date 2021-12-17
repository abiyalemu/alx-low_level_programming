#include "hash_tables.h"

/**
 * hash_table_create - function with one argument
 * @size: size of array
 *
 * Description: creates a hash table
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t = NULL;
	hash_node_t **h_n = NULL;

	h_n = calloc(size, sizeof(char *));
	if (h_n == NULL)
	{
		free(h_n);
		return (NULL);
	}

	h_t = calloc(1, sizeof(hash_table_t));
	if (h_t == NULL)
		return (NULL);

	h_t->size = size;
	h_t->array = h_n;
	return (h_t);
}
