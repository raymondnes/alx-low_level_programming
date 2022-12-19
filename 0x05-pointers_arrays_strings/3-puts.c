#include "main.h"
#include <unistd.h>

/**
  * _puts - prints a string, to stdout
  * @str: value to be evaluated in the compiler
  * Return: Not.
  */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
