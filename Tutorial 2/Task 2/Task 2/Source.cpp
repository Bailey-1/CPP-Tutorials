#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void wait_for_keypress(void);


int main()
{
	float x;
	float *p_x;

	cin >> x;
	
	cin.ignore();

	p_x = &x;
	cout << *p_x << endl;
	cout << p_x << endl;

	getchar();
}