#include "lists.h"

/**
 * add_nodeint -  a function pointer that add new node at the beginning
 * @n: nw element in a node
 * @head: pointer that points to the first pointer
 * Return: the address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (*head != NULL || newnode != NULL)
	{
		newnode = malloc(sizeof(listint_t));
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;

	
	}
	else
		return (NULL);
return (newnode);
}
