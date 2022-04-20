#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: String to print
 * Return: nothing.
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;
	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
