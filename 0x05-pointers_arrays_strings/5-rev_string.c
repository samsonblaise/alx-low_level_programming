#include "main.h"

/**
 * _strlen - function that returns the lenght of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int 1 = 0;

	while (*s != '\0')
	{
		1++;
		s++;
	}

	return (1);
}

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = o;
	int j = (_strlen(s) - 1);
	char rdc;

	while (i < j)
	{
		rdc = s[i];
		s[i] = s[j];
		s[j] = rdc;
	i++, j--;
	}
}	
