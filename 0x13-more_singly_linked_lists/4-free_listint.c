#include "lists.h"
/**
 * free_listint -  frees a list
 * @head: head of linked list
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
