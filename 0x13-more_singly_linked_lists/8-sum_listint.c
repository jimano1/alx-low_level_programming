#include "lists.h"

/**
 * sum_listint - Function that sums the integers of a linked list
 * @head: pointer to the first node in the list
 *
 * Return: sum of integers
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
