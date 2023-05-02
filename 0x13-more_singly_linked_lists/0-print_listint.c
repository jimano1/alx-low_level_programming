#include "lists.h"

/**
 * print_listint - Prints all the elements of a given singly linked list.
 * @h: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 *
 * Description: This function traverses a singly linked list and prints
 * the value of each node's "n" member, starting from the head node.
 */
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	for (; h != NULL; cont++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cont);
}
