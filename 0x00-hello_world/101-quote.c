#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints a line to the standard error
 *
 * Return: Always 1 (error code)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stderr);
	return (1);
}
