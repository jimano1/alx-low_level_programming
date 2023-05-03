#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: A header pointer
 * Return: nodes
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
