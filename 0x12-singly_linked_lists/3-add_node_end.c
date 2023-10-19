#include "lists.h"
#include <string.h>

/**
 * add_note_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the list
 * @str: string of new node
 * Return: address of new element or null if not successful
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
