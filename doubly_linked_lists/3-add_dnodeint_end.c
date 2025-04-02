#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: Double pointer to the head of the doubly linked list.
* @n: Value to store in the new node.
*
* Return: Address of the new node, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (head == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{

	new_node->prev = NULL;
	*head = new_node;
	return (new_node);

	}

	tmp = *head;
	while (tmp->next != NULL)
	tmp = tmp->next;

	tmp->next = new_node;
	new_node->prev = tmp;

	return (new_node);
}
