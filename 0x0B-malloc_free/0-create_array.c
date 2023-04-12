#include <main.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * Return: pointer to the array initialized or NULL
 */

char *create_array(unsigned int size, char c)
{
        char *n = malloc(size);
        if (n == 0)
                return (0);
        while (size--)
                n[size] = c;
        return (n);
}
