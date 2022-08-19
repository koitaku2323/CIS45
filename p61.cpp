//Program name: p61
//Name: Ryan Yee
//Date: 07/23/2020
//Description: Extra Credit bool lucky13(int array [ ], int size) 
//Given an array of ints, return true if the array contains no 1's and no 3's.
//Return true if it does not contain a 1 or 3. 

#include <iostream>
using namespace std;

bool lucky13(int array [ ], int size)
{
	for (int i = 0; i < size; i++)
	{
		if(array[i] != 1 && array[i] != 3)
		{
			return true;
		}else{
			return false;
		}
	}
}

int main()
{
	int array1 [] = {0, 2, 4};
	int size1 =  sizeof(array1) / sizeof(array1[0]);
	cout<<lucky13(array1, size1)<<endl;

	 
	int array2 [] = {1, 2, 3};
	int size2 =  sizeof(array2) / sizeof(array2[0]);
	cout<<lucky13(array2, size2)<<endl;
	 
	 
	int array3 [] = {3, 1, 2};
	int size3 =  sizeof(array3) / sizeof(array3[0]);
	cout<<lucky13(array3, size3)<<endl;
}

/*
1
0
0

Process returned 0 (0x0)   execution time : 0.110 s
Press any key to continue.
*/