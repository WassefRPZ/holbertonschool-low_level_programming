#include <stdio.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* in a doubly linked list.
* @h: Double pointer to the head of the doubly linked list.
* @idx: Index where the new node should be added. Index starts at 0.
* @n: Data to be added in the new node.
*
* Return: Address of the new node, or NULL if it failed
*         or if the index is out of range.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *current, *new_node;

	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (h == NULL)
		return (NULL);

	current = *h;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
