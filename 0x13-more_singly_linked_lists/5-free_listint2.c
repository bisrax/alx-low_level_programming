#include "lists.h"

/**
 * free_listint2 - frees the memory of lists.
 * @head: head of a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		*head = NULL;
	}
}
