#include "main.h"

/**
* squareRoot - function that returns the natural square root of a number.
* @num: input number.
* @1: for guss.
* Return: square root.
*/

double squareRoot(double num, double guess = 1)
{
	if (abs(guess * guess - num) < 0.0001)
	{
		return (guess);
	}

	double newGuess = (guess + num / guess) / 2;

	return (squareRoot(num, newGuess));
}

/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: input number.
*
* Return: square root of @n.
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (squareRoot(n, 1));
}
