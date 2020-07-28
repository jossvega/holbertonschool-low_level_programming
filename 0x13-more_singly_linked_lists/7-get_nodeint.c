#include "lists.h"
/**
 * get_nodeint_at_index - get node at index function
 * @head: head of linkedlist
 * @index: index to get
 * Return: the nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t x = 0;
	listint_t *aux = head;

	while (aux && x < index)
	{
		aux = (*aux).next;
		x++;
	}
	if (x != index)
		return (NULL);
	return (aux);
}
