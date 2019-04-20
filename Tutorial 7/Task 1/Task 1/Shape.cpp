#include "Shape.h"

Shape::Shape()
{
	m_x_position = 0;
	m_y_position = 0;
	m_colour = "None";
}

Shape::Shape(int x, int y, const char* colour)
{
	m_x_position = x;
	m_y_position = y;
	m_colour = colour;
}

void Shape::setPosition(int x, int y)
{
	m_x_position = x;
	m_y_position = y;
}
