/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int size, x;
	char ch;

	for (size = 0; s[size] != '\0'; ++size)
		;

	for (x = 0; x < size / 2; ++x)
	{
		ch = s[x];
		s[x] = s[size - 1 - x];
		s[size - 1 - x] = ch;
	}

}
