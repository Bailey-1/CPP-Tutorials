#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

int main()
{
	Rectangle rec1(2, 4, 10, 22, "Blue");
	rec1.displayArea();
	rec1.setWidth(10);
	rec1.displayArea();
	rec1.setHeight(10);
	rec1.displayArea();
	std::cin.get();
	
	Circle cir1(2,3,1,1,"blue");
	cir1.setRadius(10);
	cir1.displayArea();
	
	return 0;
}
