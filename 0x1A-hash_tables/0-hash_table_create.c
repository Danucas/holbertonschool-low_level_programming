#include "hash_tables.h"

/**
 *hash_table_create - add a new node
 *@size: new has table size
 *Return: hash table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (size < 1)
		return (NULL);
	if (!table)
		return (NULL);
	table->array = (hash_node_t **) malloc(sizeof(hash_node_t) * size);
	if (!table->array)
		return (NULL);
	memset(table->array, 0, size * sizeof(hash_node_t));
	table->size = size;
	return (table);
}
