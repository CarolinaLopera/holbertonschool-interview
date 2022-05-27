#include "lists.h"

/**
 * is_palindrome - This function check is a list is palindrome.
 *
 * Return: 1 or 0.
 * @head: points to the first node.
 */
int is_palindrome(listint_t **head)
{
	listint_t *rev = NULL, *aux = *head;
	int i = 0;

	for (; aux != NULL; i++)
	{
		add_nodeint(&rev, aux->n);
		aux = aux->next;
	}
	aux = *head;

	if (i == 0)
		return (1);

	while (aux != NULL)
	{
		if (rev->n != aux->n)
			return (0);
		rev = rev->next;
		aux = aux->next;
	}
	free_listint(rev);
	return (1);
}

/**
 * add_nodeint - This function add a node to beginning (head) of the list.
 *
 * Return: Always a adress to new node.
 * @head: points to the first node.
 * @n: is a variable integrer to add of the list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head);

	(*head) = new_node;
	return (new_node);
}
