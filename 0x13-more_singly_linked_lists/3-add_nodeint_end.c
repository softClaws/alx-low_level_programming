#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of a listint_t list
 * @head: double pointer to the beginning of listint_t list
 * @n: integer to add to the list
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *currentnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	currentnode = *head;
	while (currentnode->next != NULL)
	{
	currentnode = currentnode->next;
	}
	currentnode->next = newnode;

	return (newnode);

}
