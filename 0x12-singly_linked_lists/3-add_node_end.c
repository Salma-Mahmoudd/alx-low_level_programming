#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of linked list
 * @str: data will be saved
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	while (tmp && tmp->next)
		tmp = tmp->next;
	if (tmp)
		tmp->next = new;
	else
		*head = new;
	return (new);
}
