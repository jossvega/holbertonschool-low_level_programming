#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of a linked list
 * @head: head of linked list
 * Return: the sum of all data (n) of linked list
 * if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
