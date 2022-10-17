#include<stdio.h>
/**
* main -prints out size of data types
*Return: always 0
*/
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of char: %lu bytes\n", (unsigned long)sizeof(d));
	printf("size of int: %lu bytes\n", (unsigned long)sizeof(a));
	printf("size of long int: %lu bytes\n", (unsigned long)sizeof(b));
	printf("size of long long: %lu bytes\n", (unsigned long)sizeof(c));
	printf("size of float: %lu bytes\n", (unsigned long)sizeof(f));

	return (0);
}

