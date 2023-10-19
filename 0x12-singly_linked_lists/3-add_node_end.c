#include "lists.h"
#include <string.h>

/**
 * add_node_end - add new node to the end of list_t
 * @head: pointer to the pointer of beginning of list_t
 * @str: string to be added
 * Return: New node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *current;
	int a;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	add->str = strdup(str);
	add->len = a;
	add->next = NULL;
	if (*head == NULL)
		*head = add;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = add;
	}
	return (add);
}
