#pragma once
#include <iostream>
#include "Shape.h"

class Circle : public Shape
{
private:
	int m_radius;
public:
	Circle(int x, int y, int w, int h, const char* colour);
	void setRadius(int radius);
	void displayArea();
};