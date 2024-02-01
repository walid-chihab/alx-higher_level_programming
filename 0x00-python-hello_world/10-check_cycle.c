#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check-cycle - checks if list is cyclical
 * @list: pointer to list to check
 * Return: 1 if cyclical, 0 otherwise
 */
int check-cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	while (fast->nex && fast)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);

