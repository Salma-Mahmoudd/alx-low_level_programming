#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 * Return: nothing
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, f = 0;
	hash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (f > 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			f = 1;
		}
	}
	printf("}\n");
}
