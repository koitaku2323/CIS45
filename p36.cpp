//Program name: p36
//Name: Ryan Yee
//Date: 07/10/2020
//Description: function with TWO PARAMETERs that RETURNS a float
//Write a function that RETURNS a float value of the larger of its TWO float PARAMETERS

#include<iostream>
using namespace std;

float larger(float valA, float valB)
{
	if(valA > valB)
	{
		return valA;
	}
	if (valB > valA)
	{
		return valB;
	}
}

int main()
{
	cout<<larger(10, 1)<<endl;

	return 0;
}

/*
10

Process returned 0 (0x0)   execution time : 0.090 s
Press any key to continue.
*/
