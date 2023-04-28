#include<iostream>
using namespace std;

//Write a program that uses the #define directive to define the PI 
//constantand calculate the area of the circle. The program should 
//then ask the user for the radius of the circleand display the area 
//of the circle.

#define PI PR()

long double PR()
{
	long double pi = 0, val = 0, sum = 0;

	for (int i = 0, j = 1; i < 10; i++, j += 2)
	{
		(i % 2) ? val = -(1.0 / j) : val = (1.0 / j);
		sum += val;
	}
	return pi = 4 * sum;
}

int main()
{
	cout << PI << endl;

	return 0;
}