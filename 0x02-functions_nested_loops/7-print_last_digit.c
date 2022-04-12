#include "main.h"

/**
  * print_last_digit - prints the last digit of a number.
  * @n: digit to find the last place of.
  * Return: The last digit.
  */
int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln * -1;
	_putchar(ln + '0');
	return (ln);
}
