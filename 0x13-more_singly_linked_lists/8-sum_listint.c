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

	sum = 0;
	if (head == NULL)
		return (0);
	for (n = 0; n < sum; n++)
	{
	
	sum += n;
	}
	if (sum == n)
		return (sum);

	return (sum);

}
