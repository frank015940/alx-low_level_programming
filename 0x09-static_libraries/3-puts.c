#include "main.h"
#include "main.h"

/**
 * _puts - print a given string to screen
 * @str: passed pointer argument for string
 * On success: returns no error
 */

void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
