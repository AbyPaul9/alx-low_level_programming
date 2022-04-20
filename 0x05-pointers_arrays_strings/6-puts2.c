#include "main.h"

/**
 * puts2 - function that prints every other character
 *
 * @str: pointer to char
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(*(str + i));
		}
		i += 1;
	}
	putchar('\n');
}
