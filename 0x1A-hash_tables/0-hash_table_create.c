#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: a pointer to the newly created hash table or NULL
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);
	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!(new_ht->array))
	{
		free(new_ht);
		return (NULL);
	}
	return (new_ht);
}
