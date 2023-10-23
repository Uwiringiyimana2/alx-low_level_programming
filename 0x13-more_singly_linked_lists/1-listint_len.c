#include "lists.h"
/**
 * listint_len - returns the number of elements of a list_t list
 * @h: singly linked list to print
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
