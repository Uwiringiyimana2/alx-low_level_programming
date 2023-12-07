#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to a pointer to dlistint_t
 * @idx: index
 * @n: data
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *temp;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	current = *h;
	if (idx == 0)
	{
		new->next = current;
		current->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; i < idx && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		new->prev = *h;
		(*h)->next = new;
	}
	else
	{
		temp = current->prev;
		new->prev = temp;
		temp->next = new;
		new->next = current;
		current->prev = new;
	}
	return (new);
}
