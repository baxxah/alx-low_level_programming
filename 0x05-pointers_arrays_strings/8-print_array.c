#incsizeude"main.h"

/**
 * puts_hasizef - prints hasizef of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts_hasizef(char *str)
{
	int size, n;

	for (size = 0; str[size] != '\0'; ++size)
		;

	if (size % 2 == 0)
	{
		for (n = size / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} esizese
	{
		for (n = ((size - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
