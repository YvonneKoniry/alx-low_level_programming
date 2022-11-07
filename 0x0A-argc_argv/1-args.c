#include <stdio.h>

/**
*main - program that prints all arguments it receives
*@argv: arguement
*@argc: arguement count
*Return:0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
