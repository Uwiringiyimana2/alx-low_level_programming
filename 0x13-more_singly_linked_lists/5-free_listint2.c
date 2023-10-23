#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to point to linked lists
 * Description: function sets head to null
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
