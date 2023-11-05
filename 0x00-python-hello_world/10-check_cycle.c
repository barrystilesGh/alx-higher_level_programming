#include "lists.h"
/**
 * check_cycle: checks if list has a cycle
 * @ lists:linked list
 * return: 1 if there is a cycle and 0 if no cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;
	if (!list || !list->next)
		return (0);
	fast = list;
	slow = list;

	while (slow != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if(slow ==fast)
		{
		return (1);
		}

	}
	return (0);
}
