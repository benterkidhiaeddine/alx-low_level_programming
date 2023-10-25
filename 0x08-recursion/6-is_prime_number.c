#include "main.h"
/**
 * prime - check if the number is divisable by number start
 * from start number to itself
 * @start_number: int
 * @n: int
 * Return: if no number divided it return 1 else 0
 */
int prime(int start_number, int n)
{
	if (start_number == n)
	{
		return (1);
	}
	if (n % start_number == 0)
	{
		return (0);
	}
	return (prime(start_number + 1, n));
}
/**
* is_prime_number - function that checks if the number is prime
* @n: intRetrun: return 1 if the number is prime else return 0
* Return: return 1 if the number is prime else return 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	return	(prime(2, n));
}
