#include "main.h"

/**
  * _strlen -  a function that returns the length of a string.
  * @s: An input string
  * Return: Always 0.
  */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
