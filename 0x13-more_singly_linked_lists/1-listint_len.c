#include "lists.h"
/**
 * listint_len - count the number of elements in a linked list
 * @h: given list
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}