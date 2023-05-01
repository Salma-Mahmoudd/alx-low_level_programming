#include "lists.h"
/**
 * delete_nodeint_at_index  - delete a node at a given position.
 * @head: head of linked list
 * @index: the index of the list where the new node should be added
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *tmp2;
	unsigned int i;

	if (!head)
		return (-1);
	tmp2 = (*head)->next;
	while (tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!tmp2 || !tmp)
		{
			return (-1);
		}
		tmp = tmp->next;
		tmp2 = tmp->next;
	}
	tmp->next = tmp2->next;
	free(tmp2);
	return (1);
}
