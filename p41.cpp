//Program name: p41
//Name: Ryan Yee
//Date: 07/14/2020
//Description: function with THREE PARAMETERS that RETURNS an integer 
//Given 3 int values, return their sum.
//However, if one of the values is the same as another of the values, it does not count towards the sum.

#include<iostream>
using namespace std;

int loneSum(int a, int b, int c)
{
	int finalSum = a + b + c;

	if (a == b || a == c)
	{
		finalSum = finalSum - a*2;
		if (b == c)
		{
			finalSum = finalSum - b;
		}
	}
	return finalSum;
}

int main() 
{
	cout<<loneSum(1,2,3)<<endl;
	cout<<loneSum(3,2,3)<<endl;
	cout<<loneSum(3,3,3)<<endl;
}

/*
6
2
0

Process returned 0 (0x0)   execution time : 0.088 s
Press any key to continue.
*/
