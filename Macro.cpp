#include<iostream>
using namespace std;

//Write a program that uses the #define directive to define the PI 
//constantand calculate the area of the circle. The program should 
//then ask the user for the radius of the circleand display the area 
//of the circle.

#define tab "\n\t"
#define PI PR()
#define P(r) (round(((2)*(PI)*(r))*(100))/(100))
#define S(r) (round(((PI)*((r)*(r)))*(1000))/(1000))

long double PR()
{
	long double pi = 0, val = 0, sum = 0;

	for (int i = 0, j = 1; i < 10000; i++, j += 2)
	{
		(i % 2) ? val = -(1.0 / j) : val = (1.0 / j);
		sum += val;
	}
	return pi = 4 * sum;
}

int main()
{
	double R = 0;
	cout
		<< tab"Circle of radius"
		<< tab"\tenter >> ";
	cin >> R;

	cout 
		<< tab "Result:"
		<< tab "Perimeter = " << P(R)
		<< tab "Square\t  = " << S(R) << endl;

	//cancel mancro
#undef tab
#undef PI
#undef P
#undef S

	return 0;
}