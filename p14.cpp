//Program name: p14
//Name: Ryan Yee
//Date: 06/25/2020
//Description: Random Number, Odd or Even 
//Write a program that generates a random number between 10 to 25.
//The program then shows the random number generated, and informs the user if that number is odd or even.

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int iseed = time(NULL);
	srand(iseed);
	int min = 10;
	int max = 25;

	int randomNum = min + rand() % (max - min + 1);
	cout<<"Generating a random number between 10 to 25:  "<<randomNum<<endl;
	if (randomNum % 2 == 0)
		cout<<"The random number "<<randomNum<<" is Even.";
	else
		cout<<"The random number "<<randomNum<<" is Odd.";

	return 0;
}

/*
Generating a random number between 10 to 25:  20
The random number 20 is Even.
Process returned 0 (0x0)   execution time : 0.092 s
Press any key to continue.
*/
/*
Generating a random number between 10 to 25:  11
The random number 11 is Odd.
Process returned 0 (0x0)   execution time : 0.080 s
Press any key to continue.
*/