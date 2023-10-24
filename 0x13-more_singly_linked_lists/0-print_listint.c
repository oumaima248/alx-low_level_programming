#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
 nodes++;
 printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
