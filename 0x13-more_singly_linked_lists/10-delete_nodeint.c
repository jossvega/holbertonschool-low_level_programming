#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
* @head: head of the linked list
* @index: index to delete
* Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	listint_t *rmnode;
	unsigned int x;

	x = 0;
	aux = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
	}
	else
	{
		while (x < index - 1)
		{
			aux = aux->next;
			if (aux == NULL)
				return (-1);
			x++;
		}
		rmnode = aux;
		rmnode = rmnode->next;
		aux->next = rmnode->next;
		free(rmnode);
	}
	return (1);
}
