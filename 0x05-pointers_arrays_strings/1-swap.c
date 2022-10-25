#include "main.h"

/**
*void swap_int - swaps the values of two integers
*@a: int
*@b:int 2
*Return:void
*/

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}


