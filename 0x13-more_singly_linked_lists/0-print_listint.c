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
	size_t cnt = 0;

	while (head != NULL)
	{
		printf("%d", head->n);
		head = head->next;
		cnt++;
	}

	return (cnt);
}
		
