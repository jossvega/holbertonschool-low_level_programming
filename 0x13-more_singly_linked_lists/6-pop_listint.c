#include "lists.h"
/**
 * pop_listint - function to delete the head node of a linked list
 * @head: head of the linked list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int data;

	if (*head == NULL)
		return (0);

	data = (**head).n;
	aux = (**head).next;
	free(*head);
	*head = aux;

	return (data);
}
