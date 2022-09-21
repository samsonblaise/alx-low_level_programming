#include <stdio.h>
#include "main.h"

/**
 * _puts - function that prints a string followed by a new line
 * @str: pointer that point the string to print
 *
 * Description: prints a string
 * On success: return no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
