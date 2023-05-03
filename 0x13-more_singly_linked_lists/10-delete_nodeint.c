#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index.
 * @head: Address of the first node in a list.
 * @index: Index of the node to delete (starting from 0).
 * Return: 1 if succeeded, -1 otherwise.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *subsequent;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		current = current->next;

		if (current == NULL)
			return (-1);
	}

	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);

	return (1);
}
