#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head of linked list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
