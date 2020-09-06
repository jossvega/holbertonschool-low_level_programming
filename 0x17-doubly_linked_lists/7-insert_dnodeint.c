#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: head of the node
 * @idx: index where to place node
 * @n: data for the node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *tmpcount = *h, *tmp2;
	dlistint_t *newNode;
	unsigned int cont = 0;

	if (*h == NULL)
		return (NULL);
	while (tmpcount != NULL)
		tmpcount = tmpcount->next, cont++;
	if (idx > cont)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->prev = NULL, newNode->next = *h;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	for (cont = 0; cont < idx; cont++)
		tmp2 = temp, temp = temp->next;
	newNode->next = temp;
	newNode->prev = tmp2;
	tmp2->next = newNode;
	if (temp)
		temp->prev = newNode;
	return (newNode);
}
