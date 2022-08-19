//Program name: p39
//Name: Ryan Yee
//Date: 07/14/2020
//Description: function with TWO PARAMETERS that RETURNS a boolean 
//Given two int values, A and B, write a function to return True if either one is 6. 
//Or if their sum or difference is 6.

#include<iostream>
using namespace std;

bool love6(int A, int B)
{
	if (A == 6 || B == 6)
	{
		return true;
	}
	if (A + B == 6 )
	{
		return true;
	}
	if (A - B == 6 || B - A == 6 )
	{
		return true;
	}else{
		return false;
	}
	
}

int main()
{
	cout<<love6(6,4)<<endl;
	cout<<love6(4,5)<<endl;
	cout<<love6(1,5)<<endl;
}

/*
1
0
1

Process returned 0 (0x0)   execution time : 0.088 s
Press any key to continue.
*/