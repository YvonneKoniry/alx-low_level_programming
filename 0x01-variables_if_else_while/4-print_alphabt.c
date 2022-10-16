#include <stdio.h>
/**
*main -prints the alphabet in lowercase, except letters q and e
*Return:0 always
*/

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		for (al != 'e' && al != 'q'; )
			putchar(al);
	}

	putchar('\n');

	return (0);
}
