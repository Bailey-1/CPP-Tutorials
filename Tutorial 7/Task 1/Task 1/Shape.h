#pragma once
#include <iostream>

class Shape
{
protected:
	int m_x_position;
	int m_y_position;
	const char* m_colour;
public:
	Shape();
	Shape(int x, int y, const char* colour);
	void setPosition(int x, int y);
};
