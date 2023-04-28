#include "lists.h"
/**
 * free_list -  frees a list
 * @head: head of linked list
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp)
	{
		if (head->str)
			free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
