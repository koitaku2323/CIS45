//Program name: p43(3)
//Name: Ryan Yee
//Date: 07/15/2020
//Description: Functions 3 Sample Programs
//Display 5.12 and 5.13 (page 72, 73, 74) - Debugging with Cout. The original program (5.12) does not 
//work correctly. To troubleshoot it we commented the lines that are not working, broke the equation 
//into pieces to see which piece of the equation does not work correctly.  We use cout to see every 
//piece of the equation to see where things went wrong. The problem is that in C++ when you divide 
//one integer by another integer, the results is also integer so 5/ 9 results to Zero.

#include<iostream>
using namespace std;

int main()
{
	double fahrenheit;
	double celsius;

	cout<<"Enter temperature in fahrenheit."<<endl;
	cin>>fahrenheit;

	//Comment out original line of code but leave it
	//in the program for our reference
	//celsius = (5/9)*(fahrenheit -32);

	//Add cout statements to verify (5/9) and (fahrenheit -32)
	//are computed correctly
	double conversionFactor = 5.0/9.0;
	double tempFahrenheit = (fahrenheit - 32);

	cout<<"fahrenheit - 32 = "<<tempFahrenheit<<endl;
	cout<<"conversionFactor = "<<conversionFactor<<endl;
	celsius = conversionFactor*tempFahrenheit;
	cout<<"temperature in celsius is "<<celsius<<endl;

	return 0;
}

/* 5/9 is in integer form, double form is 5.0/9.0
Enter temperature in fahrenheit.
100
fahrenheit - 32 = 68
conversionFactor = 0.555556
temperature in celsius is 37.7778

Process returned 0 (0x0)   execution time : 2.127 s
Press any key to continue.
*/