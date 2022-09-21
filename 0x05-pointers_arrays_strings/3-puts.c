#include <stdio.>
#include "main.h"

/**
 * _puts - function that prints a string followed by a new line
 * @str: pointer that point the string to print
 * Return: return no error
 */

void _puts(char *str)
{
	int t = 0;

	while (*(str + t) != '\0')
	{
		putchar(*(str + t));
		t++;
	}
		
