#include "lists.h"

/**
 * list_len - function that returns the number of elements in list
 * @h: pointer to list
 * Description: function to return number of elements in linked liss_t list
 *
 * return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
