#include <stdlib.h>
#include <time.h>
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
	int n;
	int lst_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst_dgt = n % 10;
	/*Make sure the digit is always positive*/
	if (lst_dgt < 0)
		lst_dgt *= -1;
	if (lst_dgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dgt);
	}
	else if (lst_dgt < 6 && lst_dgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dgt);
	}
	else if (lst_dgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_dgt);
	}
	return (0);
}
