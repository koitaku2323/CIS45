//Program name: p3
//Name: Ryan Yee
//Date: 06/17/2020
//Description: Input, Output, Processing - Sum and Product
// A C++ program that reads in two integers and then outputs both their sum and their product. 

#include <iostream>
using namespace std;

int main()
{
	int value1;
	int value2;
	cout<<"Please enter your first number: ";
	cin>>value1;
	cout<<"Please enter your second number: ";
	cin>>value2;
	cout<<"The sum of the two numbers is: "<<value1 + value2<<"\n";
	cout<<"The product of the two numbers is: "<<value1 * value2<<"\n";
	return 0;
}

/*
Please enter your first number: 3
Please enter your second number: 6
The sum of the two numbers is: 9
The product of the two numbers is: 18

Process returned 0 (0x0)   execution time : 4.025 s
Press any key to continue.
*/
