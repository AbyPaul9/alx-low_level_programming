#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 *             using the Jump search algorithm.
 *
 * @list: a pointer to the head of the list to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step = sqrt(size), cLoop;
	listint_t *next = list, *prev = list;

	if (list == NULL)
		return (NULL);

	while (next && next->n < value && next->next != NULL)
	{
		for (cLoop = 0; cLoop < step && next->next; cLoop++)
			next = next->next;

		printf("Value checked at index [%ld] = [%d]\n", next->index, next->n);

		if (next->n < value && next->next != NULL)
			prev = next;
	}

	printf(
		"Value found between indexes [%ld] and [%ld]\n",
		prev->index,
		next->index
	);

	while (prev && (prev != next || (prev == next && prev->next == NULL)))
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
