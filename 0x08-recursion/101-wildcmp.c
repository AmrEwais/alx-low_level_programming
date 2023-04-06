#include "main.h"

/**
* str_checker - check if two strings are identical.
* @s1: string address.
* @s2: string address.
* @i: index1.
* @j: index2.
* Return: 1 or 0
*/

int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
* wildcmp - check if strings could be considered identical
* @s1: string address.
* @s2: string address.
* Return: 1
*/

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
