#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;

	list_t *new = malloc(sizeof(list_t));

	if (head == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[count] != '\0')
		count++;

new->str = strdup(str);
		if (new->str == NULL)
		{
		free(new);
		return (NULL);
		}

	new->len = count;
	new->next = *head;

	*head = new;

	return (new);

}
