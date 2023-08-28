#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *node, *temp;

	node = *head;

	if (!head)
		return (NULL);

	while (node)
	{
		temp = node;
		node = head->next;
		free(temp);
	}
	*head = NULL;
}
