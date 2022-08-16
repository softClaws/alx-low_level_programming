#include "lists.h"

/**
 * sum_listint - function that sum up all the data(n) of listint_t linked list
 * @head: pointer that points to the list
 * Return: sum
 *
 *
 */

int sum_listint(listint_t *head)
{
	int sum, n;

	n = 0;
	if (head == NULL || n == 0)
		return (0);
	while (n > 0)
	{
	
	sum += n;
	sum = 0;
	}
	return (sum);

}
