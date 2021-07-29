#include "lists.h"
#include <string.h>

int _strlen(char *str);
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the pointer of the head
 * @str: the string data
 *
 * Return: the address of the new element otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (head == NULL)
		(*head)->next = new_node;
	else
	{
		new_node->next = *head;
		(*head) = new_node;
	}

	return (new_node);
}

/**
 * _strlen - returns the length of a string
 * @str: the string
 *
 * Return: the length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len)
}
