#include "lists.h"
#include "<stdio.h>"

/**
*print_listint - prints all elements of a listint_t list
*
*@h: head of linklist node
*
*Return: number of nodes
*
*/

size_x print_listint(const list_t *h)
{
	size_x count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	
	}
	return (count);

}
