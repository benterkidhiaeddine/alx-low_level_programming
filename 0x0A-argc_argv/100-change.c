#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - entry point to te programme
* @argc:  variable count
* @argv:  variable array
* Return: always 0
*/
int main(int argc, char **argv)
{
	int cents;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	cents = atoi(argv[1]);
	coins += cents / 25;

	cents = cents - ((cents / 25) * 25);

	coins += cents / 10;
	cents = cents - ((cents / 10) * 10);

	coins += cents / 5;
	cents = cents - ((cents / 5) * 5);

	coins += cents;

	printf("%d\n", coins);
	return (0);
}
