#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - inserts number into sorted singly linked list.
 * @head: pointer to first node of the list.
 * @number: integer to insert in list.
 * Return: new node or null
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current, *cpy = *head;
	int i = 0, j = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = number;

	for (; cpy != NULL; i++)
	{
		if ((cpy)->n >= number)
			break;
		cpy = cpy->next;
	}
	cpy = *head;

	if (i == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	for (; *head != NULL; j++)
	{
		if ((j + 1) == i)
		{
			current = (*head)->next;
			new_node->next = current;
			(*head)->next = new_node;
			*head = cpy;
			return (new_node);
		}
		*head = (*head)->next;
	}
	*head = cpy;
	return (NULL);
}
