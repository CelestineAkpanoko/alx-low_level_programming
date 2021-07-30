#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list-str);
		free(list);
	}
}
