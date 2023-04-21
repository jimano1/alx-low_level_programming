#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of parameters passed to the function.
 * @...: a variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 **/
int sum_them_all(const unsigned int n, ...)
{
    // Define a variable argument list.
    va_list ap;
    // Declare variables to store the sum and index of the current parameter.
    unsigned int i, sum = 0;

    // Initialize the variable argument list.
    va_start(ap, n);

    // Loop through all the parameters and add them to the sum.
    for (i = 0; i < n; i++)
        sum += va_arg(ap, int);

    // Clean up the variable argument list.
    va_end(ap);

    // Return the sum.
    return (sum);
}
