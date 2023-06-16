#include "lists.h"

/**
 * get_dnodeint_at_index - Locate node in dlistint_t list.
 * @head: head of dlistint_t list.
 * @index: node to locate.
 *
 * Return: If node does'nt exist - NULL.
 *         Otherwise - address of located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
