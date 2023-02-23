#include "main.h"

/**
  * print_numbers - Print the numbers since 0 up to 9
  *
  * Return: The numbers since 0 up to 9
  */
void print_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
