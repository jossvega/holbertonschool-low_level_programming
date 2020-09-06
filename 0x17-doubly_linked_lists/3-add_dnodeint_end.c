#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list_t list
 * @head: input header pointer
 * @n: input int value
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	(*newNode).n = n;
	(*newNode).next = NULL;
	if (*head == NULL)
	{
		(*newNode).prev = NULL;
		*head = newNode;
	}
	else
	{
		temp = *head;
		while ((*temp).next != NULL)
			temp = (*temp).next;
		(*temp).next = newNode;
		(*newNode).prev = temp;
	}
	return (newNode);
}
