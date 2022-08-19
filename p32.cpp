//Program name: p32
//Name: Ryan Yee
//Date: 07/10/2020
//Description: Check Sum and Product 
//Write a program which asks the user to type in 3 numbers: a, b, c
//1) Let the user know whether a2 = b2 + c2    or    b2 = a2 + c2   or   c2 = a2 + b2 
//2) Let the user know whether a = b = c.
//3) If neither (1) and (2) are True, then tell the user that it's "neither"


#include<iostream>
using namespace std;

int main()
{
	int check1 = 0, check2 = 0, a, b, c;
	cout<<"Please enter your first number: ";
	cin>>a;
	cout<<"Please enter your second number: ";
	cin>>b;
	cout<<"Please enter your third number: ";
	cin>>c;
	if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b)
	{
		cout<<"Proved by the pathagorean theorem, the triangle formed by sides a, b and c must be a right triangle.\n";
		check1 = 1;
	}
	if(a == b && b == c)
	{
		cout<<"The triangle formed is an isosceles Triangle.\n";
		check2 = 2;
	}
	if(check1 == 0 && check2 == 0)
	{
		cout<<"The triangle formed by a, b and c is neither a right triangle nor an isosceles triangle\n";
	}


}

/*
Please enter your first number: 1
Please enter your second number: 2
Please enter your third number: 3
The triangle formed by a, b and c is neither a right triangle nor an isosceles triangle

Process returned 0 (0x0)   execution time : 5.870 s
Press any key to continue.
*/
/*
Please enter your first number: 3
Please enter your second number: 3
Please enter your third number: 3
The triangle formed is an isosceles Triangle.

Process returned 0 (0x0)   execution time : 1.925 s
Press any key to continue.
*/
/*
Please enter your first number: 5
Please enter your second number: 4
Please enter your third number: 3
Proved by the pathagorean theorem, the triangle formed by sides a, b and c must be a right triangle.

Process returned 0 (0x0)   execution time : 65.811 s
Press any key to continue.
*/