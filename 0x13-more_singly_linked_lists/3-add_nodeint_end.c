#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of linked list
 * @str: data will be saved
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (tmp && tmp->next)
		tmp = tmp->next;
	if (tmp)
		tmp->next = new;
	else
		*head = new;
	return (new);
}
