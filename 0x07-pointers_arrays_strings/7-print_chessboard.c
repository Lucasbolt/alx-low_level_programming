#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard
 * @a: board array
 */
void print_chessboard(char (*a)[8])
{
	int index, count;

	for (index = 0; index < 8; index++)
	{
		for (count = 0; count < 8; count++)
		{
			_putchar(a[index][count]);
		}
		_putchar('\n');
	}
}
