#include <stdio.h>

/**
*main - program that prints its name, followed by a new line
*@argc:counter for commad line arguments passed by user
*@argv: array of character pointers listing the arguements
*Return: 0
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[1]);
	return (0);
}
