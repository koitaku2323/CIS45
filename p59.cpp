//Program name: p59
//Name: Ryan Yee
//Date: 07/23/2020
//Description: Array and Function bool commonEnd(int array1 [ ], int array2[ ], int size1, int size2)
//Given 2 arrays of ints, a and b.
//Return true if they have the same first element or they have the same last element, and false 
//otherwise. 
//Both arrays will be length 1 or more. 


#include <iostream>
using namespace std;

bool commonEnd(int array1 [], int array2[], int size1, int size2)
{
	if((array1[0] == array2[0]) || (array1[size1-1] == array2[size2-1]))
	{
		return true;
	}else{
		return false;
	}
}

int main()
{
	int array1 [] = {1, 2, 3};
	int array2 [] = {7, 3};
	cout<<commonEnd(array1, array2, 3, 2)<<endl;
	 
	int array3 [] = {1, 2, 3};
	int array4 [] = {7, 3, 2};
	cout<<commonEnd(array3, array4, 3, 3)<<endl;
	 
	 
	int array5 [] = {1, 2, 4};
	int array6 [] = {1, 3};
	cout<<commonEnd(array5, array6, 3, 2)<<endl;
}

/*
1
0
1

Process returned 0 (0x0)   execution time : 0.100 s
Press any key to continue.
*/