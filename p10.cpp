//Program name: p10
//Name: Ryan Yee
//Date: 06/18/2020
//Description: IO Precision Area Perimeter
// INPUT: Ask the user to enter float variables Width and Hight of a rectangle.
// PROCESSING: Compute the Area and Perimeter of the rectangle.
// OUTPUT: Show the Area and Perimeter of the rectangle rounded to 1 decimal. 

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	float height, width, area, perimeter;
	cout<<"Please enter height: ";
	cin>>height;
	cout<<"Please enter width: ";
	cin>>width;
	area = height * width;
	perimeter = height * 2 + width * 2;
	printf ("Area = %.2f * %.1f = %.1f\n", height, width, area);
	printf ("Perimeter = 2 * (%.2f + %.1f) = %.1f\n", height, width, perimeter);

	return 0;

}

/*
Please enter height: 3.11
Please enter width: 4.2
Area = 3.11 * 4.2 = 13.1
Perimeter = 2 * (3.11 + 4.2) = 14.6

Process returned 0 (0x0)   execution time : 5.930 s
Press any key to continue.
*/