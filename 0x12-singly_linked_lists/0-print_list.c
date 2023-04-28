#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: given list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *ptr = h;

	while (ptr->next != NULL)
	{
		if (ptr->str == NULL)
			ptr->str = "(nil)", ptr->len = 0;
		printf("[%u] %s\n", ptr->len, ptr->str);
		ptr == ptr->next;
		count++;
	}
	return (count);
}
