#include<stdio.h>
/**
* main -prints out size of data types
*Return: always 0
*/
int main(void)
{
	int d;

	printf("size of char: %lu bytes\n", (unsigned long)sizeof (d));
	printf("size of int: %lu bytes\n", (unsigned long)sizeof (d));
	printf("size of long int: %lu bytes\n", (unsigned long)sizeof (d));
	printf("size of long long: %lu bytes\n", (unsigned long)sizeof (d));
	printf("size of float: %lu bytes\n", (unsigned long)sizeof (d));

	return (0);
}

