/* Program to calculate Triangle Area then print it on screen */

#include <iostream>
#include <cmath> 
using namespace std;


int main()

{

	int a, h;

	cout << "Please enter the Base " << endl;
	cin >> a;

	cout << "Please enter the Height " << endl;
	cin >> h;

	double Area = 0.5 * a * h;

	cout << "Triangle Area  = 1/2 base * heigt  = " << Area << endl;


	return 0;

	// created by @ilyes_Trabelsi
}