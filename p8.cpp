//Program name: p8
//Name: Ryan Yee
//Date: 06/18/2020
//Description: Height Message (if/else)
// Write the following program to compute a person's height and print out a message. 
// The user will input feet and inches. The program will convert that to inches, then print a 
// message, based on the total inches. Be sure to have your program output match mine!
// If the total inches is greater than 72, the message should be something like, "You're tall." 
// If the total inches is between 5' and 6', a second message should appear. If the total inches 
// is less than 60, a third message should appear.

#include<iostream>
using namespace std;

int main()
{
	int feet, inches, height;
	cout<<"Please enter feet: ";
	cin>>feet;
	cout<<"Please enter inches: ";
	cin>>inches;
	height = feet * 12 + inches;
	cout<<"Your height is "<<feet<<" feet + "<<inches<<" inches = "<<height<<" inches."<<endl;
	if (height > 72)
		cout<<"You are tall!\n";
	else if (height >= 60 && height <= 72)
		cout<<"You are between 5' and 6'.\n";
	else
		cout<<"Your height is slightly below average...";

	return 0;
}

/*
Please enter feet: 5
Please enter inches: 7
Your height is 5 feet + 7 inches = 67 inches.
You are between 5' and 6'.

Process returned 0 (0x0)   execution time : 3.090 s
Press any key to continue.
*/
/*
Please enter feet: 6
Please enter inches: 1
Your height is 6 feet + 1 inches = 73 inches.
You are tall!

Process returned 0 (0x0)   execution time : 6.214 s
Press any key to continue.
*/
/*
Please enter feet: 4
Please enter inches: 11
Your height is 4 feet + 11 inches = 59 inches.
Your height is slightly below average...
Process returned 0 (0x0)   execution time : 3.750 s
Press any key to continue.
*/