#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 *
 * @h: A pointer to the first node of the list
 *
 * Return: The number of elements in the list
 *
 * Description: This function traverses the list, counting the number of nodes,
 *              and returns the total count. If the list is empty, the function
 *              returns 0.
 */

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	for (; h != NULL; cont++)
	{
		h = h->next;
	}
	return (cont);
}
