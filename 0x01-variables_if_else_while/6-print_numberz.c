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

	first_number = 48;

	while (first_number != 58)
	{
		putchar(first_number);
		first_number++;
	}
	putchar('\n');
	return (0);
}
