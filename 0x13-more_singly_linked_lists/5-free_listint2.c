#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;
	
	while (*head != NULL)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}

}