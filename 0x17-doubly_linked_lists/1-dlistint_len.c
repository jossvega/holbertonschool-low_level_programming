#include "lists.h"
/**
 *  dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		h = (*h).next;
		cont++;
	}
	return (cont);
}
