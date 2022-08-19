//Program name: p27
//Name: Ryan Yee
//Date: 07/8/2020
//Description: Smallest, Largest, Sum, Average with Random Numbers 
//Write a program that generates X random integers Num.
//Num is a random number between 20 to 50. 
//X is a random number between 10 to 15.
//Calculate and show the Smallest, Largest, Sum, and Average of those numbers.

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int iseed = time(NULL);
	srand(iseed);
	int min1 = 10;
	int max1 = 15;
	int min2 = 20;
	int max2 = 50;
	int X = min1 + rand() % (max1-min1 + 1);
	int number, smallest, largest, i = 0, j;
	double sum = 0, count = 0;
	//int num = min2 + rand() % (max2-min2 + 1);

	cout<<"Generating "<<X<<" random numbers("<<X<<" is a number between 10 to 15)"<<endl;
	cout<<X<<" random numbers between 20 to 50: ";
	for (j = 0; j < X; j++)
	{
		int num = min2 + rand() % (max2-min2 + 1);
		cout<<num<<" ";
		while (true)
		{
			if (i == 0){
				smallest = num;
				largest = num;
			}
			else if (num < smallest){
				smallest = num;
			} else if (num > largest){
				largest = num;
			}
			i++;
			sum = sum + num;
			count++;
			break;
		}
	}
	double avg = sum/count;
	cout<<" "<<endl;
	cout<<"The smallest = "<<smallest<<", largest = "<<largest<<", sum = "<<sum<<", avg = "<<avg;	
}

/*
Generating 15 random numbers(15 is a number between 10 to 15)
15 random numbers between 20 to 50: 25 50 50 49 37 25 31 37 44 34 43 23 30 46 22
The smallest = 22, largest = 50, sum = 546, avg = 36.4
Process returned 0 (0x0)   execution time : 0.100 s
Press any key to continue.
*/