#include "lists.h"

/**
 * add_nodeint -  adds a new node.
 * @head: pointer to  the head of the linked list
 * @n: the element of the list
 *
 * Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
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
