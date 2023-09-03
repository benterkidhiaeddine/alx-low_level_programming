#include "main.h"
#include <stdio.h>
/**
* main - entry point to te programme
* @argc:  variable count
* @argv:  variable array
* Return: always 0
*/
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argc--)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
