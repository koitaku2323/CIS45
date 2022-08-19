//Program name: p12
//Name: Ryan Yee
//Date: 06/24/2020
//Description: Quarters, Dimes, Nickels Total
// Write a program that allows the user to enter a number of quarters, dimes and nickels 
// and then outputs the monetary value of the coins in cents.

#include<iostream>
using namespace std;

int main()
{
	int quarters, dimes, nickels, cents;
	cout<<"Please enter quarters: ";
	cin>>quarters;
	cout<<"Please enter dimes: ";
	cin>>dimes;
	cout<<"Please enter nickels: ";
	cin>>nickels;
	cents = quarters*25 + dimes*10 + nickels*5;
	cout<<"You have " << quarters << "*(25) + " << dimes << "*(10) + " << nickels << "*(5) = " << cents << "cents";
}

/*
Please enter quarters: 2
Please enter dimes: 3
Please enter nickels: 1
You have 2*(25) + 3*(10) + 1*(5) = 85cents
Process returned 0 (0x0)   execution time : 3.456 s
Press any key to continue.
*/