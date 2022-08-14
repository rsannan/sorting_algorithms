#include "sort.h"
/**
* swap_node- swaps two nodes in a doubly linked list
* @i: node to be moved back
* @j: node to be moved forward
*
* Return: Void
*/
void swap_node(listint_t *i, listint_t *j)
{
	j->prev->next = i;
	i->prev = j->prev;
	j->prev = i;
	j->next = i->next;
	i->next->prev = j;
	i->next = j;
}
/**
* swap_node_top- swaps two nodes at head in a doubly linked list
* @i: node to be moved back
* @j: node to be moved forward
*
* Return: Void
*/
void swap_node_top(listint_t *i, listint_t *j)
{
	j->prev = i;
	j->next = i->next;
	i->prev = NULL;
	i->next->prev = j;
	i->next = j;
}
/**
* swap_node_end- swaps two nodes in a doubly linked list
* @i: node to be moved back
* @j: node to be moved forward
*
* Return: Void
*/
void swap_node_end(listint_t *i, listint_t *j)
{
	j->next = NULL;
	i->next = j;
	j->prev->next = i;
	i->prev = j->prev;
	j->prev = i;
}
/**
* insertion_sort_list- sorts a doubly linked list of integers
* @list: list to sort
*
* Return: Void
*/
void insertion_sort_list(listint_t **list)
{
listint_t *j, *i;
listint_t *current = *list;
listint_t *head = *list;
if (current->next != NULL && current->next->next != NULL)
{
	current = current->next;
	while (current != NULL)
	{
		i = current;
		j = i->prev;
		if (current->next != NULL)
			current = current->next;
		while (j->n > i->n && j != NULL)
		{
			if (j->prev == NULL)
			{
				swap_node_top(i, j);
				*list = i;
				head = *list;
				print_list(head);
				break;
			}
			else if (i->next == NULL)
			{
				swap_node_end(i, j);
				j = i->prev;
				print_list(head);
				current = NULL;
			}
			else
			{
				swap_node(i, j);
				j = i->prev;
				print_list(head);
			}
		}
	}
}
}
