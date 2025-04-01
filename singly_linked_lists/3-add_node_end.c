#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;

	list_t *new = malloc(sizeof(list_t));
	list_t *lastnode = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	while (str[count] != '\0')
		count++;

	new->str = strdup(str);
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

		else
		{
			while (lastnode->next != NULL)
				lastnode = lastnode->next;
			lastnode->next = new;

		}

		return (new);

}
