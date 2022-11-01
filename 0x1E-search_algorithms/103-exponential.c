#include "search_algos.h"

/**
 * min - return the minimum between two number
 *
 * @a: number one
 * @b: number  two
 *
 * Return: minimum
 */
int min(int a, int b)
{
	return ((a < b) ? a : b);
}

/**
 * print_array - print all value of an array in line
 *
 * @array: a pointer to the first element of the array to search in
 * @start: first element index of the array
 * @end: last element index of the array
 */
void print_array(int *array, int start, int end)
{
	int cLoop;

	printf("Searching in array: ");
	for (cLoop = start; cLoop <= end; cLoop++)
	{
		printf("%d", array[cLoop]);

		if (cLoop < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * b_search - searches for a value in a sorted array of integers
 *            using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @start: first element index of the array
 * @end: last element index of the array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int b_search(int *array, int start, int end, int value)
{
	size_t cLoop;

	if (array == NULL)
	{
		return (-1);
	}

	while (start <= end)
	{
		print_array(array, start, end);
		cLoop = start + (end - start) / 2;

		if (array[cLoop] == value)
			return (cLoop);

		if (array[cLoop] > value)
			end = cLoop - 1;
		else
			start = cLoop + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		return (0);
	}

	i = 1;

	while (i < (int) size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf(
		"Value found between indexes [%d] and [%d]\n",
		i / 2, min(i, size - 1)
	);

	return (b_search(array, i / 2, min(i, size - 1), value));
}
