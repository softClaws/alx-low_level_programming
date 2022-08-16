#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at given position
 * @head: points to the list
 * @idx: index of the list
 * @n: data of node
 * Return: the addresss of new node or NULL
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL && idx)
	{
	if (idx > 0)
	{
		newnode = malloc(sizeof(listint_t));
		newnode->n = n;
		newnode->next = NULL;
		return (newnode);
	}
	else
		return (NULL);
	}
	return (0);



}
