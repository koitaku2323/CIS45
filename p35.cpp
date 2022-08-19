//Program name: p35
//Name: Ryan Yee
//Date: 07/10/2020
//Description: function with one PARAMETER that RETURNS a boolean 
//Write a function with a name "isEven".
//The function RETURNS a boolean value.
//The function has an integer PARAMETER named "number"
//The function returns "true" if the integer is even and "false" if the integer is odd. 
//(You can Consider 0 to be an even number). 

#include<iostream>
using namespace std;

bool isEven(int number)
{
	if (number % 2 == 0)
	{
		return true;
	}else{
		return false;
	}
}

int main()
{
	cout<<isEven(2)<<endl;
	cout<<isEven(1)<<endl;
}

/*
1
0

Process returned 0 (0x0)   execution time : 0.097 s
Press any key to continue.
*/