#ifndef DRAW_X_AND_O_INCLUDED
#define DRAW_X_AND_O_INCLUDED 1

#include "Cursor.c"
#include "GameData.c"
void draw_X_at_grid_location(char);
void draw_O_at_grid_location(char);

void draw_X_at_grid_location(char location)
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(output, YELLOW);
	char square = 254;
	int x, y;
	switch (location)
	{
	case '1':
		for (x = 22, y = 25; x <= 30, y <= 33; x++, y++) // Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}

		for (x = 30, y = 25; x >= 20, y <= 33; x--, y++) // Anti-Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}
		break;

	case '2':
		for (x = 34, y = 25; x <= 42, y <= 33; x++, y++) // Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}

		for (x = 42, y = 25; x >= 34, y <= 33; x--, y++) // Anti-Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}
		break;

	case '3':
		for (x = 46, y = 25; x <= 54, y <= 33; x++, y++) // Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}

		for (x = 54, y = 25; x >= 46, y <= 33; x--, y++) // Anti-Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}
		break;

	case '4':
		for (x = 22, y = 15; x <= 30, y <= 23; x++, y++) // Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}

		for (x = 30, y = 15; x >= 22, y <= 23; x--, y++) // Anti-Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}
		break;

	case '5':
		for (x = 34, y = 15; x <= 42, y <= 23; x++, y++) // Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}

		for (x = 42, y = 15; x >= 34, y <= 23; x--, y++) // Anti-Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}
		break;

	case '6':
		for (x = 46, y = 15; x <= 54, y <= 23; x++, y++) // Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}

		for (x = 54, y = 15; x >= 46, y <= 23; x--, y++) // Anti-Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}
		break;

	case '7':
		for (x = 22, y = 5; x <= 30, y <= 13; x++, y++) // Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}

		for (x = 30, y = 5; x >= 22, y <= 13; x--, y++) // Anti-Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}
		break;

	case '8':
		for (x = 34, y = 5; x <= 42, y <= 13; x++, y++) // Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}

		for (x = 42, y = 5; x >= 34, y <= 13; x--, y++) // Anti-Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}
		break;

	case '9':
		for (x = 46, y = 5; x <= 54, y <= 13; x++, y++) // Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}

		for (x = 54, y = 5; x >= 46, y <= 13; x--, y++) // Anti-Diagonal
		{
			moveCursorTo(x, y);
			putchar(square);
		}
		break;
	}
}

void draw_O_at_grid_location(char location)
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(output, 0xe);
	char square = 254;
	int x, y;
	switch (location)
	{
	case '1':
		for (x = 23; x <= 29; x++) // Horizontal lines
		{
			moveCursorTo(x, 25); // First one
			putchar(square);
			moveCursorTo(x, 33); // Second one
			putchar(square);
		}

		for (y = 26; y <= 32; y++) // Vertical Lines
		{
			moveCursorTo(22, y); // First one
			putchar(square);
			moveCursorTo(30, y); // Second one
			putchar(square);
		}
		break;

	case '2':
		for (x = 35; x <= 41; x++) // Horizontal lines
		{
			moveCursorTo(x, 25); // First one
			putchar(square);
			moveCursorTo(x, 33); // Second one
			putchar(square);
		}

		for (y = 26; y <= 32; y++) // Vertical Lines
		{
			moveCursorTo(34, y); // First one
			putchar(square);
			moveCursorTo(42, y); // Second one
			putchar(square);
		}
		break;

	case '3':
		for (x = 47; x <= 53; x++) // Horizontal lines
		{
			moveCursorTo(x, 25); // First one
			putchar(square);
			moveCursorTo(x, 33); // Second one
			putchar(square);
		}

		for (y = 26; y <= 32; y++) // Vertical Lines
		{
			moveCursorTo(46, y); // First one
			putchar(square);
			moveCursorTo(54, y); // Second one
			putchar(square);
		}
		break;

	case '4':
		for (x = 23; x <= 29; x++) // Horizontal lines
		{
			moveCursorTo(x, 15); // First one
			putchar(square);
			moveCursorTo(x, 23); // Second one
			putchar(square);
		}

		for (y = 16; y <= 22; y++) // Vertical Lines
		{
			moveCursorTo(22, y); // First one
			putchar(square);
			moveCursorTo(30, y); // Second one
			putchar(square);
		}
		break;

	case '5':
		for (x = 35; x <= 41; x++) // Horizontal lines
		{
			moveCursorTo(x, 15); // First one
			putchar(square);
			moveCursorTo(x, 23); // Second one
			putchar(square);
		}

		for (y = 16; y <= 22; y++) // Vertical Lines
		{
			moveCursorTo(34, y); // First one
			putchar(square);
			moveCursorTo(42, y); // Second one
			putchar(square);
		}
		break;

	case '6':
		for (x = 47; x <= 53; x++) // Horizontal lines
		{
			moveCursorTo(x, 15); // First one
			putchar(square);
			moveCursorTo(x, 23); // Second one
			putchar(square);
		}

		for (y = 16; y <= 22; y++) // Vertical Lines
		{
			moveCursorTo(46, y); // First one
			putchar(square);
			moveCursorTo(54, y); // Second one
			putchar(square);
		}
		break;

	case '7':
		for (x = 23; x <= 29; x++) // Horizontal lines
		{
			moveCursorTo(x, 5); // First one
			putchar(square);
			moveCursorTo(x, 13); // Second one
			putchar(square);
		}

		for (y = 6; y <= 12; y++) // Vertical Lines
		{
			moveCursorTo(22, y); // First one
			putchar(square);
			moveCursorTo(30, y); // Second one
			putchar(square);
		}
		break;

	case '8':
		for (x = 35; x <= 41; x++) // Horizontal lines
		{
			moveCursorTo(x, 5); // First one
			putchar(square);
			moveCursorTo(x, 13); // Second one
			putchar(square);
		}

		for (y = 6; y <= 12; y++) // Vertical Lines
		{
			moveCursorTo(34, y); // First one
			putchar(square);
			moveCursorTo(42, y); // Second one
			putchar(square);
		}
		break;

	case '9':
		for (x = 47; x <= 53; x++) // Horizontal lines
		{
			moveCursorTo(x, 5);
			putchar(square);
			moveCursorTo(x, 13);
			putchar(square);
		}

		for (y = 6; y <= 12; y++) // Vertical Lines
		{
			moveCursorTo(46, y);
			putchar(square);
			moveCursorTo(54, y);
			putchar(square);
		}
		break;
	}
}

#endif // DRAW_X_AND_O_INCLUDED
