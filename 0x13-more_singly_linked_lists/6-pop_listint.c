#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and returns its data.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: The data stored in the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
