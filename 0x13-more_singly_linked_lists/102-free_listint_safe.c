#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the head of nodes in the linked list
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *current = head;
	size_t node_count = 0;
	const listint_t *visited[1024];

	while (current)
	{
		size_t i;
		for (i = 0; i < node_count; i++)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			return (node_count)
		}
	}

	visited[node_count] = current;
 	printf("[%p] %d\n", (void *)current, current->n);
	current = current->next;
	node_count++;
}
