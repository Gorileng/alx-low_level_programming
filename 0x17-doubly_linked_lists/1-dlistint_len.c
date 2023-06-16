#include "lists.h"

/**
 * print_dlistint - Print all elements of dlistint_t list.
 * @h: head of dlistint_t list.
 *
 * Return: number of nodes in a list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
