#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints all elements in a linked list
 * @h: the pointer to the head
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num_elem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_elem++;
	}

	return (num_elem);
}
