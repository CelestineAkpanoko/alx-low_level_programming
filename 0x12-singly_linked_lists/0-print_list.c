#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: numbers of nodes
 */
size_t print_list(const list_t *h)
{

	int cnt = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		cnt++;
	}
	return (cnt);
}
