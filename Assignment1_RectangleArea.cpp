#include <iostream>

using namespace std;

int main()
{
	// print name of program
	cout << "Rectangle Calculator" << endl << endl;

	// get height and width from user
	double height;
	double width;
	cout << "Enter height and width: " << endl;
/* write your code here */
	cin >> height;
	cin >> width;

	// calculate area
	double area;
	area = height * width;

	// write output to console
	cout << "The area of the rectangle is: "<< area << endl;

	// return value that indicates normal program exit
    return 0;
}

