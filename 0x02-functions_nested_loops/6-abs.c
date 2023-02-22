#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @n: n is an integer
 *
 * Return: n if n is greater than 0, -n if n is
 * less than 0, otherwise return n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
