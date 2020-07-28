#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to the listint_t list
 * @n: new  node-digit to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *aux = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while ((*aux).next)
		aux = (*aux).next;

	(*aux).next = new;

	return (new);
}
