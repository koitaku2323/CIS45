//Program name: p37
//Name: Ryan Yee
//Date: 07/10/2020
//Description: function with FOUR PARAMETERs that RETURNS a float
//Write and test the following function that RETURNS the average of FOUR PARAMETERs that 
//are passed to it.

#include<iostream>
using namespace std;

float average(float valA, float valB, float valC, float valD)
{
	return (valA + valB + valC + valD)/4;
}
int main()
{
	cout<<average(4,5,6,7)<<endl;

	return 0;
}

/*
5.5

Process returned 0 (0x0)   execution time : 0.089 s
Press any key to continue.
*/
