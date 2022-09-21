#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function that prints string in reverse order
 * @s: string to reverse to print
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10)
}
