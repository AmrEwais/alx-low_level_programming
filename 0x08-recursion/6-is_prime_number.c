#include "main.h"

/**
* get_ans - checks to see if number is prime or nor
* @a: int
* @b: int
* Return: 1 or 0
*/
int get_ans(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (get_ans(a + 1, b));
}

/**
* is_prime_number - function that returns 1 if the input integer is a prime number, otherwise return 0.
* @n:input nmp
* Return: 1 or 0
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (get_ans(2, n));
}
