#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a given singly linked list.
 * @h: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 *
 * Description: This function traverses a singly linked list and counts
 * the number of nodes it contains, starting from the head node.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
