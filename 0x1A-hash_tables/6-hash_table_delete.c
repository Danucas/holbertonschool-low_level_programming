#include "hash_tables.h"
/**
 *hash_table_delete - get value at key
 *@ht: the header
 *Return: value at key NULL if fails
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *nex;
	unsigned long int index = 0;

	if (!ht)
		return;
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node)
		{
			nex = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = nex;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
