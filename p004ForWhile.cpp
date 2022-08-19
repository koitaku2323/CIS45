//Program name: p19
//Name: Ryan Yee
//Date: 06/30/2020
//Description: Type up the 2 Loop Examples
//Type up the two examples on repetition p004ForWhile.cpp and p005BreakContinue.cpp 
//(see below) including the comments, and get them working. 
// Example of FOR, WHILE

#include<iostream>
using namespace std;

int main()
{
	int count;
	//FOR loop is used when an action must be repeated
	//FOR ( BGEIN; END CONDITION; INCREMENT ) { statements... ;}
	for (count = 0; count < 3; count++)
	{
		cout<<"In FOR loop:"<<endl;
		cout<<"count = "<<count<<endl;
	}

	// WHILE loop is also used when an action must be repeated
	// WHILE (END CONDITION ){statements... ;}
	while (count < 4){
		cout<<"In WHILE loop:"<<endl;
		cout<<"count = "<<count<<endl; // shows only if count < 3
		count++;
	}

	//DO-WHILE loop is used when an action must be repeated at least once
	//DO {statement...;} WHILE (END CONDITION);
	do {
		cout<<"In DO-WHILE loop:"<<endl;
		cout<<"count = "<<count<<endl;
		count = count + 1;
	} while (count < 3); //condition tested at the end, so loop happens at least once

	return 0;
}

/*
In FOR loop:
count = 0
In FOR loop:
count = 1
In FOR loop:
count = 2
In WHILE loop:
count = 3
In DO-WHILE loop:
count = 4

Process returned 0 (0x0)   execution time : 0.142 s
Press any key to continue.
*/