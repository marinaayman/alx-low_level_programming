#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked- allocates memory using malloc.
  * @b: size of the required allocated memory.
  * Return: on success, pointer to the allocated memory.
  *         on failure, exit code status 98.
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
