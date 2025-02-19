#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)

{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i != 101 && i !=  113)
	{
		putchar(i);
	}
	i++;
	}
	putchar('\n');
	return (0);
}
