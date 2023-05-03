#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 *
 * @head: A pointer to the head of the list
 * @n: The integer value to store in the new node
 *
 * Return: A pointer to the new node, or NULL if allocation fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	if (head != NULL)
	{
		new_node = malloc(sizeof(*new_node));
		if (new_node != NULL)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
		}
	}
	return (new_node);
}
