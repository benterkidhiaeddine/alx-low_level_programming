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
	int first_letter;

	first_number = 48;
	first_letter = 97;
	while (first_number != 58)
	{
		putchar(first_number);
		first_number++;
	}
	while (first_letter != 103)
	{
		putchar(first_letter++);
	}
	putchar('\n');
	return (0);
}
