#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add to the node
 *
 * Return: the address of the new list, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
