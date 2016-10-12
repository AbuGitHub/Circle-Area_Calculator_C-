/*  Abuzar Noorali
Assignment: 1, Ch 2
Due Date: 09/06/2016
Purpose/Description: This program calculates the diameter, circumference, and area of a circle with a given radius.
*/
#include <iostream>
using namespace std;
int main()
{
	int radius = 0;
	cout << "Please enter the radius of a circle\n"; //display message
	cin >> radius; //redefine radius variable
				   //Lines 11-13 calculate and output diameter, circumference, and area based on radius input by user.
	cout << "The Diameter of the circle is: " << (2 * radius);
	cout << "\nThe Circumference of the circle is: " << (2 * 3.14159 * radius);
	cout << "\nThe Area of the circle is: " << (3.14159 * (radius * radius));
	cout << "\n"; //Space for display
	return 0; // indicate that program ended successfully
} //end of main function