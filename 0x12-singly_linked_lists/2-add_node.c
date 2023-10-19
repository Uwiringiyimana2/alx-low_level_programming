#include "lists.h"
#include <string.h>

/**
 * add_nodeint - function to add node at the beginning of list
 * @head: pointer to the pointer of the list
 * @str: str to duplicate
 * Return: pointer to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}
