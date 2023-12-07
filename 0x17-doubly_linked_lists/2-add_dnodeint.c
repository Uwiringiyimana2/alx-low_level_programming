#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of lists
 * @head: pointer to a pointer to the dlistint_t
 * @n: n
 *
 * Return: the address of the new element of NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
