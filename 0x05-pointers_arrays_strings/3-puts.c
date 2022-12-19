#include "main.h"

/**
  * _puts - Write a function that prints a string, followed
  * by a new line, to stdout.
  * @str: an input string
  * Return: Always 0.
  */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
