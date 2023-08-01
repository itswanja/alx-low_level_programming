#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: A pointer to the address of the head if the listint_t list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
