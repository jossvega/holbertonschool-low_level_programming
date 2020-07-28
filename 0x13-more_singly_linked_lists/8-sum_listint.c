#include "lists.h"
/**
 * sum_listint - returns the sum of all data (n) of a linked list
 * @head: head of linked list
 * Return: the sum of all data (n) of linked list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *aux;

	if (head == NULL)
		return (0);
	sum = 0;
	aux = head;
	while (aux)
	{
		sum = sum + (*aux).n;
		aux = (*aux).next;
	}
	return (sum);
}
