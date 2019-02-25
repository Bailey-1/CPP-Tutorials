#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void wait_for_keypress(void);

void halfDouble(float *p_a, float *p_b, float *p_c);
void manInTheMiddle(float *p_a, float *p_b, float *p_c);

int main()
{
	float a = 2.5;
	float b, c;
	manInTheMiddle(&a, &b, &c);

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;

	wait_for_keypress();
}

void manInTheMiddle(float *p_a, float *p_b, float *p_c) {
	halfDouble(*p_a, *p_b, *p_c);
}

void halfDouble(float **p_a, float **p_b, float **p_c) {
	**p_b = **p_a / 2;
	**p_c = **p_a * 2;
}



void wait_for_keypress(void)
{
	cout << "Press Enter to continue" << endl;
	cin.get();
}
