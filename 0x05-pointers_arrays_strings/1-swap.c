#include "main.h"

/**
  * swap_int -  a function that swaps the values of two integers
  * @a: an inout integer pointer
  * @b: an input integer pointer
  * Return: Always 0.
  */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
