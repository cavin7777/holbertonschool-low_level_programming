#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print the chessboard
 * @a: 2D array representing the chessboard (8*)
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++) /* rows */
	{
		for (j = 0; j < 8; j++) /* columns */
		{
			putchar(a[i][j]); /* print each character */
		}
		putchar('\n'); /* new line after each row */
	}
}
