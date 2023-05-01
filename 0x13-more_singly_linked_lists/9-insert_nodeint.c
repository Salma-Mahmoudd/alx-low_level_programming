#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of linked list
 * @idx: the index of the list where the new node should be added.
 * @n: data of new node.
 * Return:  the address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head;
	unsigned int i;

	if (!(tmp))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
		new->next = *head, *head = new;
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (!tmp)
				return (NULL);
			tmp = tmp->next;
		}
		new->next = tmp->next;
		tmp->next = new;
	}
	return (new);
}
