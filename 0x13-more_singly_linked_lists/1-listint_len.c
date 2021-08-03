#include "lists.h"

/**
 * listint_len - prints number of nodes.
 * @h: value of list
 *
 * Return: any data type list
 */
size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
