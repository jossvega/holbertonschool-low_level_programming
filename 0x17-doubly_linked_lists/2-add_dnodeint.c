#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: input header pointer
 * @n: Input int value
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	(*newNode).n = n;
	(*newNode).prev = NULL;
	if (*head == NULL)
	{
		(*newNode).next = NULL;
		*head = newNode;
	}
	else
	{
		(*newNode).next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}
	return (newNode);
}
