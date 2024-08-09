#include "sort.h"
#include <stddef.h>
#include <stdio.h>
/**
*swap_nodes - swap nodes throughout double linked list
*@head: header pointer, kinda like a storage pointer to
*help sort elements before swapping them
*@node1: first node to be swapped
*@node2: second node to swap with node1
*Return: void
*/
void swap_nodes(listint_t **head, listint_t **node1, listint_t *node2)
{
(*node1)->next = node2->next;
if (node2->next != NULL)
node2->next->prev = *node1;
node2->prev = (*node1)->prev;
node2->next = *node1;
if ((*node1)->prev != NULL)
(*node1)->prev->next = node2;
else
*head = node2;
(*node1)->prev = node2;
*node1 = node2->prev;
}
/**
*insertion_sort_list - sorts doubly linked list of integers in
*ascending order using insertion sort algorithm
*@list: list required sorting
*Return: void
*/
void insertion_sort_list(listint_t **list)
{
listint_t *array_iter, *insert, *tmp;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
for (array_iter = (*list)->next; array_iter != NULL; array_iter = tmp)
{
tmp = array_iter->next;
insert = array_iter->prev;
while (insert != NULL && array_iter->n < insert->n)
{
swap_nodes(list, &insert, array_iter);
print_list((const listint_t *)*list);
}
}
}
