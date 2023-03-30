#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string to check
 *
 * Return: length of string
 */
int _strlen(const char *str)
{
	int len;
	for(len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node_end - adds a new node to the end of a list
 * @head: first node
 * @str: string
 *
 * Return: address of the new element, NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if(str == NULL)
		return (NULL);
	if(strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if(new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if(*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
