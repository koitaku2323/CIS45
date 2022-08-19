//Program name: p55
//Name: Ryan Yee
//Date: 07/23/2020
//Description: Swap Example 
//Type up the example below and get it working. Submit your program and output.

//Example how to swap values
#include <iostream>
using namespace std;

int main()
{
	int v1 = 5;
	int v2 = 10;
	int temp;

	cout<<"Before swap: v1 = "<<v1<<", v2 = "<<v2<<endl;

	temp = v1; // temp = 5
	v1 = v2; // v1 = 10
	v2 = temp; // v2 = 5

	cout<<"After swap: v1 = "<<v1<<", v2 = "<<v2<<endl;

	return 0;
}

/*
Before swap: v1 = 5, v2 = 10
After swap: v1 = 10, v2 = 5

Process returned 0 (0x0)   execution time : 0.085 s
Press any key to continue.
*/