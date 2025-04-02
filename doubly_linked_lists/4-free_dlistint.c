#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;



while (head != NULL)
	{
	tmp = head;
	head = head->next;
	free(tmp);
	}

}
