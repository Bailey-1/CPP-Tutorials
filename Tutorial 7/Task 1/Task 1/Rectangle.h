#pragma once
#include <iostream>
#include "Shape.h"

class Rectangle : public Shape
{
private:
	int m_width;
	int m_height;
public:
	Rectangle(int x, int y, int w, int h, const char* colour);
	void setHeight(int height);
	void setWidth(int width);
	void displayArea();
};
