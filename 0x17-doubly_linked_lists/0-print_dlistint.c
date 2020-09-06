#include "lists.h"
/**
 * print_dlistint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		cont++;
	}
	return (cont);
}
