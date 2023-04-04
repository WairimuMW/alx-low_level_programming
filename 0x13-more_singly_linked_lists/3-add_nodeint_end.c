#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to linked list
 * @n: data to add
 *
 * Return: address to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if(new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if(*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while(temp->next != NULL) /* traverse to last node */
			temp = temp->next;
		temp->next = new_node; /* change the next of last node to new node */
	}

	return (new_node);
}
