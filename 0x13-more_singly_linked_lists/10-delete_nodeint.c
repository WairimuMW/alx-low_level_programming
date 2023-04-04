#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at an index
 * @head: pointer to a linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if success, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *temp2;

	if(*head == NULL)
		return (-1);

	temp = *head;
	if(index == 0) /* first node */
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while(temp != NULL && i < (index - 1))
	{
		temp = temp->next;
		i++;
	}
	if(temp->next == NULL || i != (index - 1))
		return (-1);

	temp2 = temp->next;
	temp->next = (temp->next)->next;
	free(temp2);
	return (1);
}
