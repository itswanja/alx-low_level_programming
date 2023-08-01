#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: first node of listint_t list
 * Return: sum of all the data (n) of a listint_t list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
