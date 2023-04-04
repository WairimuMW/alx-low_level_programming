#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: linked list
 * @index: index of the node, starting at 0
 *
 * Return: address of the node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if(head == NULL)
		return (NULL);

	while((i < index) && (head != NULL))
	{
		head = head->next;
		i++;
	}
	if(i == index)
		return(head);

	return (NULL);
}
