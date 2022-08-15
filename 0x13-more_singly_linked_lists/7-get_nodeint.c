#include "lists.h"

/**
 * get_nodeint_at_index - function pointer that return nth node of a listint_t linked list.
 * @head: pointer that points to listint_t list
 * @index: index of node
 * Return: nth node of listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	newnode->next = NULL;
	newnode->n = index;
	index = 0;
	while (head != NULL || newnode != NULL)
	{
		index++;
		return (newnode);
	}

return (newnode);
}
