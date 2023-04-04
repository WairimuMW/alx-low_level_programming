#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to linked list
 * @n: data to be added
 *
 * Return: address of the new node, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* declare the new node */

	new_node = malloc(sizeof(listint_t));
	if(new_node == NULL)
		return (NULL);

	new_node->n = n; /* store data */
	new_node->next = *head; /* change next of new node to point to head */
	*head = new_node; /* change head to point to new node */

	return (new_node);
}
