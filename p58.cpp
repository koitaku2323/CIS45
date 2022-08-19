//Program name: p58
//Name: Ryan Yee
//Date: 07/23/2020
//Description: Array and Function bool firstLast6(int array[ ] , int size) 
//Given an array of ints, write a function that returns true if 6 appears as either the first or last element in the array. 
//The array will be length 1 or more. 

#include <iostream>
using namespace std;

bool firstLast6(int array[], int size)
{
	if(array[0] == 6 || array[size-1] == 6)
	{
		return true;
	}else{
		return false;
	}
}

int main()
{
	int array1 [] = {1, 2, 6};
	cout<<firstLast6(array1, 3)<<endl;
	int array2 [] = {6, 1, 2, 3};
	cout<<firstLast6(array2, 4)<<endl;
	int array3 [] = {13, 6, 1, 2, 3};
	cout<<firstLast6(array3, 5)<<endl;
}

/*
1
1
0

Process returned 0 (0x0)   execution time : 0.080 s
Press any key to continue.
*/
