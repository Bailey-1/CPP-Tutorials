#include <iostream>
#include "Circle.h"

Circle::Circle(int x, int y, int w, int h, const char* colour) : Shape(x, y, colour)
{
	
}

void Circle::setRadius(int radius) { m_radius = radius; }

void Circle::displayArea()
{
	std::cout << m_radius*m_radius * 3.14159265359 << std::endl;
}
