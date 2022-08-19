//Program name: p56
//Name: Ryan Yee
//Date: 07/23/2020
//Description: Move the Largest Number to the Right 
//Write a program that asks the user for an array of X numbers.
//Your program moves the largest number all the way to the right, and then  shows it to the user.
//Hint: Use a loop to swap X times, but only swap if the number on the left is bigger than the 
//number on the right.


#include <iostream>
using namespace std;

int temp;

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
	cout<<endl;
	for (int a=0; a < numEnter; a++)
	{
		if (array[a]>array[a+1])
		{
			temp = array[a];
			array[a] = array[a+1];
			array[a+1] = temp;
		}
	}
	cout<<"The largest number is: "<<array[numEnter-1]<<endl;
	cout<<"New List: ";
	for (int b = 0; b < numEnter; b++)
	{
		cout<<array[b];
		if (b < numEnter - 1)
		{
			cout<<", ";
		}
	}
	cout<<endl;

}

/*
How many numbers would you like to enter? 6
Enter number 1: 20
Enter number 2: 3
Enter number 3: 5
Enter number 4: 7
Enter number 5: 8
Enter number 6: 10
The numbers you entered are: 20, 3, 5, 7, 8, 10
The largest number is: 20
New List: 3, 5, 7, 8, 10, 20

Process returned 0 (0x0)   execution time : 15.084 s
Press any key to continue.
*/