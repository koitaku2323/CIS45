//Program name: p19
//Name: Ryan Yee
//Date: 06/30/2020
//Description: Type up the 2 Loop Examples
//Type up the two examples on repetition p004ForWhile.cpp and p005BreakContinue.cpp 
//(see below) including the comments, and get them working. 
//Example of: BREAK and CONTINUE

#include<iostream>
using namespace std;

int main()
{
	int R = 0, num;
	while (R < 3) //repeats until R is less than 3
	{
		cout<<"INSIDE WHILE, r = "<<R<<endl;
		R += 1; // R = R + 1; same as R++;
	}

	int Age = -10;
	//OR
	while ((Age<0)||(Age>123)) //repeats while ONE condition IS TRUE
	{
		cout<<"Please enter a valid age: ";
		cin>> Age;
	}

	//AND 
	while ((Age>0)&&(Age<123))//repeats while BOTH conditions ARE TRUE
	{
		cout<<"Age is correct, enter invalid age to stop loop: ";
		cin>>Age;
	}

	//BREAK and CONTINUE
	while (true)// a loop that will go on forever
	{
		cout<<"Please enter 1 to stop and 2 to repeat the loop: ";
		cin>>num;
		if (num == 1)
			break; //ends the while loop
		else if (num == 2 )
			continue; // makes while loop resume from the beginning (line 35)
		cout<< "Does this ever show?\n";
	}
	return 0;
}

/*
INSIDE WHILE, r = 0
INSIDE WHILE, r = 1
INSIDE WHILE, r = 2
Please enter a valid age: -2
Please enter a valid age: 222
Please enter a valid age: 22
Age is correct, enter invalid age to stop loop: 22
Age is correct, enter invalid age to stop loop: 34
Age is correct, enter invalid age to stop loop: -4
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 0
Does this ever show?
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 1

Process returned 0 (0x0)   execution time : 39.080 s
Press any key to continue.
*/