#include"main.h"

/**
 * print_numbers - letra 0 - 9
 *             only using _putchar dos veces
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
