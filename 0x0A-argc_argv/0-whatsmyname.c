#include <stdio.h>

/**
 * main - prints the name of the programe
 * @argc: void
 * @argv: execution name
 *
 * Return: 0 always.
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
