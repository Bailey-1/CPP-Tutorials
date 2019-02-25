#include <iostream>

using namespace std;

int main()
{
	int x; 		// Declare x
	int *p_int;	// Declare int pointer p_int
	int y;      	// Declare y

	p_int = NULL;	// Set p_int to NULL
	p_int = &x;	// Point p_int at x
	x = 2;		// Give x a value of 2
	y = *p_int;	// Copy what p_int is pointing at into y

	cin.get();
}
