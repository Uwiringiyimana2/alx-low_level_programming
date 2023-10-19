#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to first node
 * str is NULL, print [0] (nil)
 *
 *Return: the numbers of nodes
 */
  
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		printf("[0] (nil)\n");

	while (h != NULL)
	{	
		count++;
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return count;
}

