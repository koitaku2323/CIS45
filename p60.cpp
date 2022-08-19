//Program name: p60
//Name: Ryan Yee
//Date: 07/23/2020
//Description: Array and Function bool no23(int array [ ]) 
//Given an int array of length 2.
//Return true if it does not contain a 2 or 3. 


#include <iostream>
using namespace std;

bool no23(int array [])
{
if (array[0] != 2 && array[0] != 3)
	{
		if (array[1] != 2 && array[1] != 3)
		{
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	}
}

int main()
{
	int array1[] = {4, 5};
	cout<<no23(array1)<<endl;

	 
	int array2[] = {4, 2};
	cout<<no23(array2)<<endl;
	 
	 
	int array3[] = {3, 5};
	cout<<no23(array3)<<endl;
}

/*
1
0
0

Process returned 0 (0x0)   execution time : 0.088 s
Press any key to continue.
*/