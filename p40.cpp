//Program name: p40
//Name: Ryan Yee
//Date: 07/14/2020
//Description: function with THREE PARAMETERS that RETURNS a boolean
//Given 2 int values, return true if one is negative and one is positive.
//Except if the parameter "negative" is true, then return true only if both are negative.

#include<iostream>
using namespace std;

bool posNeg(int val1, int val2, bool negative)
{
	while (negative != true)
	{
		if (val1 < 0 || val2 < 0)
		{
			if (val1 >= 0 || val2 >= 0)
			{
				return true;
			}else{
				return false;
			}
		}else{
			return false;
		}
		break;
	}

	while (negative = true)
	{
		if(val2 < 0 && val1 < 0)
		{
			return true;
		}else{
			return false;
		}
		break;
	}
}


int main()
{
	cout<<posNeg(1, -1, false)<<endl;
	cout<<posNeg(-1, 1, false)<<endl;
	cout<<posNeg(-4, -5, true)<<endl;
}

/*
1
1
1

Process returned 0 (0x0)   execution time : 0.100 s
Press any key to continue.
*/