#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: head of linked list
 * @index: the index of the node, starting at 0
 * Return: Pointer.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *arr = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (arr == NULL)
			return (NULL);
		arr = arr->next;
	}
	return (arr);
}
