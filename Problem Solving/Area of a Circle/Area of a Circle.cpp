//Problem 
//Given a number R calculate the area of a circle using the following formula:

//Area = ?? * R2.
//
//Note: consider ? = 3.141592653.
//
//Input
//Only one line containing the number R(1 ??? R ??? 100).
//
//Output
//Print the calculated area, with 9 digits after the decimal point.

#include <iostream>
using namespace std;

int main()
{
	const double ? = 3.141592653;
	double R ;
	double result = pow(R, 2);
	cin >> R;

	cout << ? * result;

	return 0;

}


