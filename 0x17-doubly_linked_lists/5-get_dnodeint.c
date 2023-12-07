#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: a pointer to dlistint_t list
 * @index: index
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	i = 0;
	current = head;
	while (i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (NULL);
	return (current);
}
