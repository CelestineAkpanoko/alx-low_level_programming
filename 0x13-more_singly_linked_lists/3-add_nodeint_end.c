#include "lists.h"

/**
 * add_nodeint_end - adds node to end of file.
 * @head: pointer to a linked list
 * @n: attribute of a node
 *
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
	}
	return (temp);
}
