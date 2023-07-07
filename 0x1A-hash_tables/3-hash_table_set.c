#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value:  the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long indx;

	if (!ht || !key || !value)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[indx] && strcmp(ht->array[indx]->key, key) == 0)
	{
		ht->array[indx]->value = strdup(value);
		return (1);
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[indx];
	ht->array[indx] = node;
	return (1);
}
