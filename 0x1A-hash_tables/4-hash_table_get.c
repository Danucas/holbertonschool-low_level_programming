#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht | !key)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if(strcmp((const char *) key, node->key) == 0)
		{
			return (node->value);
		}
	}
	return (NULL);
}
