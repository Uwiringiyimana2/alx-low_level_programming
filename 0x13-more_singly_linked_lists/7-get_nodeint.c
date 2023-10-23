#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: pointer to head of list
 * @index: index of node
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
