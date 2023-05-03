#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Address of the first node in the list.
 *
 * Return: Address of the new first node in the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
