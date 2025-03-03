#include "main.h"
#include <stdio.h>


void print_chessboard(char (*a)[8])

{
int l = 0;
int c = 0;

	while ( l < 8)
	{
		c = 0;
		while ( c < 8)
			{
				_putchar(a[l][c]);
				c++;
			}
		_putchar('\n');
		l++;

	}


}
