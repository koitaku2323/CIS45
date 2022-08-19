//Program name: p30
//Name: Ryan Yee
//Date: 07/8/2020
//Description: Write a program that uses a loop to compute and show the value of the penny at 
//day 30, and exactly how much more (or less) that is compared to the 1 million dollars.

#include<iostream>
using namespace std;

int main()
{
	int penny = 1, i;
	for (i = 0; i < 30; i++)
	{
		penny = penny * 2;
	}
	cout<<"1 penny doubles its value for the next 30 days is equal to = "<<penny/100<<" dollars"<<endl;
	int moneyLost = penny/100 - 1000000;
	cout<<"If I choose 1 million dollars over 1 penny that doubles its value for the next 30 days,\n";
	cout<<"I would to lose "<<moneyLost<<" dollars";
}

/*
1 penny doubles its value for the next 30 days is equal to = 10737418 dollars
If I choose 1 million dollars over 1 penny that doubles its value for the next 30 days,
I would to lose 9737418 dollars
Process returned 0 (0x0)   execution time : 0.081 s
Press any key to continue.
*/