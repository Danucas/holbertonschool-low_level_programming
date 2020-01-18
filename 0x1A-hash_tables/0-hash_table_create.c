#include "hash_tables.h"
/**
 *add_hash_node - add a new node
 *@top: top
 *Return: void
 */


hash_node_t *add_hash_node(hash_node_t **top)
{
	hash_node_t *t = *top;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
	{
		return (NULL);
	}
	if (!t)
	{
		node->next = NULL;
		*top = node;
	}
	else
	{
		while (t)
		{
			if (!t->next)
			{
				node->next = NULL;
				t->next = node;
				break;
			}
			t = t->next;
		}
	}
	return (node);
}
/**
 *hash_table_create - add a new node
 *@size: new has table size
 *Return: hash table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int pos = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t) * size);
	table->size = size;
	return (table);
	(void) size;
	(void) pos;
}
