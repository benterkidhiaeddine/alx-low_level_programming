#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point to the programme
 *
 * Return: alwways 0 (Sucess)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int first_number;

	first_number = 0;

	while (first_number < 10)
	{
		printf("%d", first_number);
		first_number++;
	}
	putchar('\n');
	return (0);
}
