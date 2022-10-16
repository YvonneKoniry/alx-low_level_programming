#include <stdio.h>
/**
*main - prints the alphabet in lowercase, and then in uppercase.
*Return: 0 success
*/

int main(void)
{
	char ul;

	for (ul = 'a'; ul <= 'z'; ul++)
		putchar(ul);

	for (ul = 'A'; ul <= 'Z'; ul++)
		putchar(ul);

	putchar('\n');

	return (0);
}
