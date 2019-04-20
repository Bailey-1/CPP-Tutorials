#include "Square.h"

Square::Square(int x, int y, int side, const char* colour) : Rectangle(x, y, side, side, colour)
{
	side_length = side;
}
