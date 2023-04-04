#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: linked list
 *
 * Return: None
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if(head == NULL) /* no linked list */
		return;

	while(head != NULL) /* traverse linked list */
	{
		temp = head; /* equate temp to head */
		head = temp->next; /* move to next node */
		free(temp); /* free node */
	}
}
