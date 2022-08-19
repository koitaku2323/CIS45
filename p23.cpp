//Program name: p23
//Name: Ryan Yee
//Date: 07/1/2020
//Description: Count Odd and Even Numbers (%)
//Write a program that accepts integers from the user and tells how many of the numbers 
//entered were odd and how many were even. The program should stop asking for integers when the 
//user inputs a zero.  

#include<iostream>
using namespace std;

int main()
{
	int constant = 1;
	int num, even, odd;
	even = 0;
	odd = 0;
	while (constant == 1)
	{
		cout<<"Please enter an integer: ";
		cin>>num;

		if (num != 0){
			if (num % 2) 
				odd++;
			else
				even++;
		}else{
			constant =0;
		}
	}
	cout<<"You entered "<<odd<<" odd and "<<even<<" even."<<endl;
	return 0;
}

/*
Please enter an integer: 5
Please enter an integer: -2
Please enter an integer: 123
Please enter an integer: 0
You entered 2 odd and 1 even.

Process returned 0 (0x0)   execution time : 5.120 s
Press any key to continue.
*/