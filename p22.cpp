//Program name: p22
//Name: Ryan Yee
//Date: 07/1/2020
//Description: Sum of numbers from 150 to 250 inclusive 
//Write a program to find the sum of every integer number from 150 to 250 inclusive.
//Also show the total count of numbers AND the average of the numbers.

#include<iostream>
using namespace std;

int main()
{
	int count = 0;
	int num, sum;
	sum = 0; 

	for (num = 150; num<=250; num++)
	{
		sum = sum + num;
		count++;
	}
	cout<<"The sum of the numbers from 150 to 250 is: "<<sum<<endl;
	cout<<"Count of the numbers: "<<count<<endl;
	cout<<"Average of the numbers: "<<sum/count<<endl;

	return 0;
}

/*
The sum of the numbers from 150 to 250 is: 20200
Count of the numbers: 101
Average of the numbers: 200

Process returned 0 (0x0)   execution time : 0.080 s
Press any key to continue.
*/