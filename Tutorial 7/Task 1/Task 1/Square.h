#pragma once
#include "Rectangle.h"

class Square : public Rectangle
{
private:
	int side_length;
public:
	Square(int x, int y, int side, const char* colour);
};
