#include "lists.h"

/**
 * listint_len - return elements number
 *  @h: list
 *  Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;


	while (h != NULL)
	{
		num_nodes += 1;
		h = h->next;
	}
	return (num_nodes);
}
