#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * sets the head to NULL
 * @head: head of linked list
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (head == NULL)
		return;
	while (tmp)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
