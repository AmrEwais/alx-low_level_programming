#include "main.h"

/**
 * get_sqrt - get the square root
 * @a:int
 * @b:int
 * Return: int
 */

int get_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (get_sqrt(a + 1, b));
}

/**
 * _sqrt_recursion - function returns x^y.
 * @n: input integer.
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (get_sqrt(1, n));
}
