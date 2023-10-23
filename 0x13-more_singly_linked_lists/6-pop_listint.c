#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of list
 * Return: the head node's data(n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current, *temp;

	if (head == NULL)
		return (0);
	temp = current = *head;
	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(temp);
	}
	else
		i = 0;
	return (i);
}
