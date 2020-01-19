#include "hash_tables.h"
/**
 *hash_table_print - get value at key
 *@ht: the header
 *Return: value at key NULL if fails
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node, *nodes[1024];
	unsigned long int index = 0, els_c = 0;

	if (!ht)
		return;
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node)
		{
			nodes[els_c] = node;
			els_c++;
			node = node->next;
		}
		index++;
	}
	index = 0;
	printf("{");
	while (nodes[index])
	{
		printf("'%s': '%s'", nodes[index]->key, nodes[index]->value);
		if (nodes[index + 1])
			printf(", ");
		index++;
	}
	printf("}\n");

}
