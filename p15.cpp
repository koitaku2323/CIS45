//Program name: p15
//Name: Ryan Yee
//Date: 06/25/2020
//Description: Practice with ASCII 
//Write a C++ program, which declares a char variable letterOrNumber.
//Ask the user to input any character from the keyboard into that letterOrNumber.

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char letterOrNumber;
	cout<<"Please enter something: ";
	cin>>letterOrNumber;
	cout<<"What you entered: "<<letterOrNumber<<endl;
	cout<<"ASCII of what you entered: "<<int(letterOrNumber)<<endl;
	if (int(letterOrNumber)>=0 && int(letterOrNumber)<=47)
		cout<<"What you entered is neither a number or a letter.\n";
	if (int(letterOrNumber)>=48 && int(letterOrNumber)<=57)
		cout<<"What you entered is a number.\n";
	if (int(letterOrNumber)>=58 && int(letterOrNumber)<=64)
		cout<<"What you entered is neither a number or a letter.\n";
	if (int(letterOrNumber)>=65 && int(letterOrNumber)<=90)
		cout<<"What you entered is a upper case letter.\n";
	if (int(letterOrNumber)>=91 && int(letterOrNumber)<=96)
		cout<<"What you entered is neither a number or a letter.\n";
	if (int(letterOrNumber)>=97 && int(letterOrNumber)<=122)
		cout<<"What you entered is a lower case letter.\n";
	if (int(letterOrNumber)>=123 && int(letterOrNumber)<=127)
		cout<<"What you entered is neither a number or a letter.\n";

	return 0;
}

/*
Please enter something: 2
What you entered: 2
ASCII of what you entered: 50
What you entered is a number.

Process returned 0 (0x0)   execution time : 2.040 s
Press any key to continue.
*/
/*
Please enter something: d
What you entered: d
ASCII of what you entered: 100
What you entered is a lower case letter.

Process returned 0 (0x0)   execution time : 2.766 s
Press any key to continue.
*/
/*
Please enter something: @
What you entered: @
ASCII of what you entered: 64
What you entered is neither a number or a letter.

Process returned 0 (0x0)   execution time : 21.345 s
Press any key to continue.
*/
/*
Please enter something: F
What you entered: F
ASCII of what you entered: 70
What you entered is a upper case letter.

Process returned 0 (0x0)   execution time : 5.989 s
Press any key to continue.
*/