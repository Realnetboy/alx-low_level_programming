1-list_len.c.txt
Who has access
A
System properties
Type
Text
Size
343 bytes
Storage used
343 bytes
Location
singly_linked_lists
Owner
Antony Bahati
Modified
Oct 20, 2022 by Antony Bahati
Opened
11:54 AM by me
Created
Oct 20, 2022
No description
Viewers can download
#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the start of the linked list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
