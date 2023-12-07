#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: pointer to a pointer to list
 * @index: index
 * Return: 1 successful, 0 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
	{
		*head = current->next;
	}
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
