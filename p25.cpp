//Program name: p25
//Name: Ryan Yee
//Date: 07/2/2020
//Description: Largest, Smallest, Sum, Average of X Numbers (if/else, loop)
//Write a program to find the largest, smallest, sum, and average of X numbers entered by the user.
//The program will prompt the user to enter X, and X numbers, pressing the Enter key after each number
//entered.
//Output will show the largest, smallest, sum, and average of all numbers

#include<iostream>
using namespace std;

int main()
{
	int count = 0, number, smallest, largest, i = 0, sum = 0, many, j;

	cout<<"How many numbers to you want to enter? ";
	cin>>many;
	for (j = 0; j < many; j++)
	{
		while (true)
		{
			cout<<"Please enter a number: ";
			cin>>number;
			if (i == 0){
				smallest = number;
				largest = number;
			}
			else if (number < smallest){
				smallest = number;
			} else if (number > largest){
				largest = number;
			}
			i++;
			sum = sum + number;
			count++;
			break;
		}
	}
	cout<<"The smallest = "<<smallest<<", largest = "<<largest<<", sum = "<<sum<<", avg = "<<sum/count;	
}

/*
How many numbers to you want to enter? 5
Please enter a number: 1
Please enter a number: 2
Please enter a number: 3
Please enter a number: 4
Please enter a number: 5
The smallest = 1, largest = 5, sum = 15, avg = 3
Process returned 0 (0x0)   execution time : 5.020 s
Press any key to continue.
*/