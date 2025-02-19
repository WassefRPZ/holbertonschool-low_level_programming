#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int r;

		i = 97;
		while (i <= 122)
		{
			putchar(i);
			i++;

		}

		r = 65;
		while (r <= 90)
		{
			putchar(r);
			r++;

		}
		putchar('\n');
		return (0);
}
