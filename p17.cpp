//Program name: p17
//Name: Ryan Yee
//Date: 06/25/2020
//Description: 
//Write a program to convert any given number of total cents (under 100) into the correct number 
//of: quarters, dimes, nickels, pennies.

#include<iostream>
using namespace std;

int main()
{
	int totalCoins;
	int q,d,n,p;

	cout<<"Please enter the number of coins: ";
	cin>> totalCoins;

	q = totalCoins / 25;
	if (q>0){
		cout<<"# of Quarters: "<<q<<" x 25c = "<<q*25<<" cents total"<<endl;
		totalCoins = totalCoins - q*25;
	}
	d = totalCoins / 10;
	if (d>0){
		cout<<"# of Dimes: "<<d<<" x 25c = "<<d*10<<" cents total"<<endl;
		totalCoins = totalCoins - d*10;
	}
	n = totalCoins / 5;
	if (n>0){
		cout<<"# of Nickels: "<<n<<" x 25c = "<<n*5<<" cents total"<<endl;
		totalCoins = totalCoins - n*5;
	}
	p = totalCoins / 1;
	if (p>0){
		cout<<"# of Pennies: "<<p<<" x 25c = "<<p*1<<" cents total"<<endl;
		totalCoins = totalCoins - p*1;
	}

}

/*
Please enter the number of coins: 66
# of Quarters: 2 x 25c = 50 cents total
# of Dimes: 1 x 25c = 10 cents total
# of Nickels: 1 x 25c = 5 cents total
# of Pennies: 1 x 25c = 1 cents total

Process returned 0 (0x0)   execution time : 1.798 s
Press any key to continue.
*/