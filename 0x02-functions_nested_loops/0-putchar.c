#include "main.h"

/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	char *main = "Main";

	while (*main)
	{
		_putchar(*main);
		main++;
	}
	_putchar('\n');
	return (0);
}
