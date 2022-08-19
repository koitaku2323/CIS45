//Program name: p53
//Name: Ryan Yee
//Date: 07/23/2020
//Description: Array Input/Output (10pts) 
//Ask the user how many numbers to enter.
//Enter those numbers into an Array, and then Show them.


#include <iostream>
using namespace std;

int main()
{
	int numEnter;
	cout<<"How many numbers would you like to enter? ";
	cin>>numEnter;
	int array[numEnter];

	for (int i=0; i < numEnter; i++)
	{
		
		cout<<"Enter number "<<i+1<<": ";
		cin>>array[i];
		
	}

	cout<<"The numbers you entered are: ";
	for (int j = 0; j < numEnter; j++)
	{
		cout<<array[j];
		if (j < numEnter - 1)
		{
			cout<<", ";
		}
	}
}

/*
How many numbers would you like to enter? 7
Enter number 1: 3
Enter number 2: 6
Enter number 3: 5
Enter number 4: 7
Enter number 5: 8
Enter number 6: 9
Enter number 7: 4
The numbers you entered are: 3, 6, 5, 7, 8, 9, 4
Process returned 0 (0x0)   execution time : 7.075 s
Press any key to continue.
*/

