#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Return:  always 0 (Success)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", msg);
	return (1);

}
