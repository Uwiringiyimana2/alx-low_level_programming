#include "lists.h"

/**
 * listint - singly linked lists to print
 * @h - pointer to elements in linked lists
 *
 * Description: function to print elements of lists
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
