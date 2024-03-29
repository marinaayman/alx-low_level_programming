#include "function_pointers.h"

/**
  * print_name- prints a name.
  * @name: the string to be printed.
  * @f: pointer function to functio required.
  * Return: void.
  */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
