#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the doubly linked list.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (head == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);


}
