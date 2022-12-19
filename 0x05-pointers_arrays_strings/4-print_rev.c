#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line.
  * @s: input string.
  * Return: Always 0.
  */
void print_rev(char *s)
{
	int live;

	for (live = 0; s[live] != '\0'; live++)
	{
	}
	for (live = live - 1; live >= 0; live--)
	{
		_putchar(s[live]);
	}
	putchar('\n');
}
