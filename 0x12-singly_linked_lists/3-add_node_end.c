#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: a pointer to pointer of the head of the linked list
 * @str: a string data
 *
 * Return: address of the new element, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (*head->next != NULL)
			*head = *head->next;
		*head->next = new_node;
	}

	return (new_node);
}


