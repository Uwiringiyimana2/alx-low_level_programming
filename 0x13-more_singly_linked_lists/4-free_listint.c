#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: pointer to linked lis
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
