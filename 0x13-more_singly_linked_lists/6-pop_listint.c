#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to linked list
 *
 * Return: head node's data, 0 otherwise
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if(*head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
