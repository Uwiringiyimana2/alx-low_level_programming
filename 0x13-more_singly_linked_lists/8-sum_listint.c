#include "lists.h"

/**
 * sum_listint - sum of all the data of linked list
 * @head: pointer to list
 * Return: sum, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
