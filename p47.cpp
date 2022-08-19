//Program name: p47
//Name: Ryan Yee
//Date: 07/21/2020
//Description: int sumDouble(int value1, int value2) 
//Given two int values, return their sum. Unless the two values are the same, 
//then return double their sum. 

#include<iostream>
using namespace std;

int sumDouble(int value1, int value2)
{
	if (value1 == value2)
	{
		return value1*2 + value2*2;
	}else{
		return value1 + value2;
	}

}

int main()
{
	cout<<sumDouble(1, 2)<<endl;
	cout<<sumDouble(3, 2)<<endl;
	cout<<sumDouble(2, 2)<<endl;
	cout<<sumDouble(-1, 0)<<endl;
	cout<<sumDouble(3, 3)<<endl;
	cout<<sumDouble(0, 0)<<endl;
	cout<<sumDouble(0, 1)<<endl;
	cout<<sumDouble(3, 4)<<endl;

	return 0;
}

/*
3
5
8
-1
12
0
1
7

Process returned 0 (0x0)   execution time : 0.100 s
Press any key to continue.
*/