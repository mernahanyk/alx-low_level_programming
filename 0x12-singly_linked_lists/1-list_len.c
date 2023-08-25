#include "lists.h"

/**
  * list_len - function to return the number of elements in a list
  * @h: list of elements to count
  * Return: number of elements of the list
  */


size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
