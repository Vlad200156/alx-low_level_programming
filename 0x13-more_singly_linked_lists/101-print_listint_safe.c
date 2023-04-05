#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *a = NULL;
	const listint_t *l = NULL;
	size_t counter = 0;
	size_t ne;

	a = head;
	while (a)
	{
		printf("[%p] %d\n", (void *)a, l->n);
		counter++;
		a = a->next;
		l = head;
		ne = 0;
		while (ne < counter)
		{
			if (a == l)
			{
				printf("-> [%p] %d\n", (void *)a, a->n);
				return (counter);
			}
			l = l ->next;
			ne++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
