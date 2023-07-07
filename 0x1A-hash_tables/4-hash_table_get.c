#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table 
 * @key: the key you are looking for
 * Return: value associated with the element, or NULL if key couldn’t be found
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long indx;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[indx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
