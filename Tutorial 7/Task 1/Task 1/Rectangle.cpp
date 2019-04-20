#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int w, int h, const char* colour) : Shape(x, y, colour)
{
	m_height = h;
	m_width = w;
}

void Rectangle::setHeight(int height){m_height = height;}

void Rectangle::setWidth(int width){m_width = width;}

void Rectangle::displayArea()
{
	std::cout << m_height * m_width << std::endl;
}
