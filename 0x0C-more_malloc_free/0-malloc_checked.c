#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *j = malloc(b);

	if (m == 0)
		exit(98);
	return (j);
}
