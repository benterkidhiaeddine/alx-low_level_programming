#include "function_pointers.h"
/**
* print_name - function that is responsible for printing a function as is
* @name: char* - the name to printed
* @f: the call back function that is actualy responsible for printing
* the name
*/
void print_name(char *name, void(*f)(char *))
{
	f(name);
}
