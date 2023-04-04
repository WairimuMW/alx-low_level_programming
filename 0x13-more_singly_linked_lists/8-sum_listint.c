#include "lists.h"

/**
 * sum_listint - finds the sum of the data in the linked list
 * @head: linked list
 *
 * Return: sum of the data in the linked list, 0 otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while(head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
