#include "main.h"

/**
  * print_alphabet - prints alphabets in lower case, followed by a new line
  */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');
}
