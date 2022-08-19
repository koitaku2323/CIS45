//Program name: p45
//Name: Ryan Yee
//Date: 07/21/2020
//Description: bool sleepIn(bool weekday, bool vacation)
//Write a function sleepIn with two parameters 'weekday' and 'vacation'.
//The parameter 'weekday' is True if it is a weekday, and the parameter 'vacation' is True if 
//we are on vacation. 
//We sleep in if it is not a weekday or we're on vacation. Return True if we can sleep in. 

#include<iostream>
using namespace std;

bool sleepIn(bool weekday, bool vacation)
{
	if (weekday == false || vacation == true)
	{
		return true;
	}else{
		return false;
	}
}

int main()
{
	cout<<sleepIn(false, false)<<endl;
	cout<<sleepIn(true, false)<<endl;
	cout<<sleepIn(false, true)<<endl;
	cout<<sleepIn(true, true)<<endl;

	return 0;
}

/*
1
0
1
1

Process returned 0 (0x0)   execution time : 0.100 s
Press any key to continue.
*/
