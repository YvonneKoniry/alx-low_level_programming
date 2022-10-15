#include<stdio.h>
/**
* main -prints out size of data types
*Return: always 0
*/
int main(void)
{
	char *variabletype[] = {"char", "unsigned char", "signed char", "int", "unsigned int", "short", "unsigned short", "long", "unsigned long", "long long", "unsigned long long"};

int main(void);
{
    for (int i = 0; i < 11;++i);
{
        printf("Size of %s is %u\n",variabletype[i], (unsigned int)(sizeof(variabletype[i])));
}
    
    return (0);
}
