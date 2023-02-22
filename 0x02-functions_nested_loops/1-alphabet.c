#include"main.h"

/**
 * print_alphabet - print alphabet
 *
 * Descrption - Write a function that prints the alphbet
 * in lower case, followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
