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
	int first_letter;
	int last_letter;
	int upper_first_letter;
	int upper_last_letter;

	first_letter = 97;
	last_letter = 122;
	while (first_letter <= last_letter)
	{
		putchar(first_letter);
		first_letter++;
	}
	while (upper_first_letter <= upper_last_letter)
	{
		putchar(upper_first_letter);
		upper_first_letter++;
	}
	putchar('\n');
	return (0);
}
