//Program name: p24
//Name: Ryan Yee
//Date: 07/1/2020
//Description: average, largest, smallest
//Write a program to Input a set of numbers terminated by the value -999. 
//Find the average, the largest, and the smallest value. 

#include<iostream>
using namespace std;

int main()
{
	int count = 0, number, smallest, largest, i = 0, sum = 0;

	while (true)
	{
		cout<<"Please enter a number: ";
		cin>>number;
		if (number == -999)
			break;
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
	}
	cout<<"The smallest = "<<smallest<<", largest = "<<largest<<", sum = "<<sum<<", avg = "<<sum/count;
	return 0;
}

/*
Please enter a number: 1
Please enter a number: 2
Please enter a number: 3
Please enter a number: -999
The smallest = 1, largest = 3, sum = 6, avg = 2
Process returned 0 (0x0)   execution time : 5.481 s
Press any key to continue.
*/
/*
Please enter a number: 3
Please enter a number: 2
Please enter a number: 1
Please enter a number: -999
The smallest = 1, largest = 3, sum = 6, avg = 2
Process returned 0 (0x0)   execution time : 6.591 s
Press any key to continue.
*/
/*
Please enter a number: 3
Please enter a number: 1
Please enter a number: 2
Please enter a number: -999
The smallest = 1, largest = 3, sum = 6, avg = 2
Process returned 0 (0x0)   execution time : 6.590 s
Press any key to continue.
*/