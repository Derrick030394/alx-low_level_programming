 #include "main.h"

/**
 * print_alphabet_x10 - print all alphabet in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char letter;

	int a;

	a = 0;
	while (a <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		a++;
		_putchar('\n');
	}
}
