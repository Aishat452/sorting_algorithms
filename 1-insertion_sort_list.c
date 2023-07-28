#include "sort.h"

/**
* swap_list - Swaps two nodes in a doubly linked list.
* @head: head pointer of the lists pointer.
* @a: first node to be swapped pointer.
* @b: second node to be swapped pointer.
*/

void swap_list(listint_t **head, listint_t **a, listint_t *b)
{
(*a)->next = b->next;
if (b->next != NULL)
b->next->prev = *a;
b->prev = (*a)->prev;
b->next = *a;
if ((*a)->prev != NULL)
(*a)->prev->next = b;
else
*head = b;
(*a)->prev = b;
*a = b->prev;
}

/**
* insertion_sort_list - Sorts doubly linked list of ints
* with insertion sort.
* @list: Points to the head pointer of the list.
*/
void insertion_sort_list(listint_t **list)
{
listint_t *curr, *insert, *temp;

/* Base case: If the list is empty or has only one element, it is already sorted */
if (!list || !*list || !(*list)->next)
return;

for (curr = (*list)->next; curr != NULL; curr = temp)
{
temp = curr->next;
insert = curr->prev;
while (insert != NULL && curr->n < insert->n)
{
swap_list(list, &insert, curr);
/* Print the list after each swap for visualization */
print_list((const listint_t *)*list);
}
}
}
