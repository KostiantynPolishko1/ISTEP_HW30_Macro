#include<iostream>
#include<stdio.h>
using namespace std;

//Write a program that uses the #define directive to define the PI 
//constant and calculate the area of the circle. The program should 
//then ask the user for the radius of the circle and display the area 
//of the circle.

#define tab "\n\t"
#define PI PR()
#define P(r) (round(((2)*(PI)*(r))*(100))/(100))
#define S(r) (round(((PI)*((r)*(r)))*(1000))/(1000))

int checkV()
{
	int a;
	while (true) // the cycle continues until the user enters the correct value
	{
		cin >> a;
		if (cin.fail()) // if the previous extraction was unsuccessful,
		{
			cout << "\n\t\tIncorrect input.\n\t\tenter >> ";
			cin.clear(); // then return the cin to 'normal' mode of operation
			cin.ignore(32767, '\n'); // and remove the previous input values from the input buffer
		}
		else // if all is well, return a
		{
			cin.ignore(32767, '\n'); // and remove the previous input values from the input buffer
			return abs(a);
		}
	}

	return 0;
}

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

	cout << tab"MACRO. P & S of circle\n";
	cout
		<< tab"Circle of radius"
		<< tab"\tenter >> ";
	R = checkV();

#ifdef PI
	cout 
		<< tab"Result:"
		<< tab"Perimeter = " << P(R)
		<< tab"Square\t  = " << S(R) << endl;
	cout << tab"\tTHE END\n";
#else
	cout << tab "macro PI is not defined" << endl;
#endif;

	//cancel mancro
#undef tab
#undef PI
#undef P
#undef S

	return 0;
}