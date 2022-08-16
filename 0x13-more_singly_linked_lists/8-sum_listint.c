#include "lists.h"

/**
 * sum_listint - return sum of data
 * @head: pointer
 * Return: sum, or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
