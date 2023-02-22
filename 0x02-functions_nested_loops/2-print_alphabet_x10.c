#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char i = 'a';

	while (n < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		n++;
	}
}
