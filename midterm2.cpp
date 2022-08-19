//Program name: Midterm2
//Name: Ryan Yee
//Date: 07/16/2020
//Description: Midterm - Longer Program (60pts)
//Write a C++ program that accepts the lengths of three sides (a,b,c) of a triangle as input from 
//the user. 
//Validate the user input, so that sides a, b, c can only be POSITIVE.
//The program output should indicate whether or not the triangle is an Equilateral Triangle, 
//a Right Triangle , Isosceles which is Not Equilateral, or some Other type of triangle. 
//Set up the program so the user can choose to repeat the program, if desired. 
//Test your program for the 4 types of triangles, and submit the output with your C++ program. 
//Use the Sample Run data.

#include<iostream>
using namespace std;

int sideA, sideB, sideC, choice, deter1, deter2, deter3;

int checkEquilateral(int sideA, int sideB, int sideC)
{
	if (sideA == sideB && sideB == sideC)
	{
		deter1 = 0;
		cout<<"This is an Equilateral triangle! (all sides are equal)"<<endl;
	}else{
		deter1 = 1;
	}
}

int checkRight(int a, int b, int c)
{
	if (a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a+b*b)
	{
		deter2 = 0;
		cout<<"This is a right triangle!"<<endl;
	}else{
		deter2 = 1;
	}
}

int checkIsosceles(int a, int b, int c)
{
	if((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
	{
		deter3 = 0;
		cout<<"This is an Isosceles triangle!"<<endl;
	}else{
		deter3 = 1;
	}
}

int main()
{
	while(true)
	{
		while(true)
		{
			cout<<"Please enter side A: ";
			cin>>sideA;
			if (sideA < 0)
			{
				cout<<"Value entered must be POSITIVE!"<<endl;
				continue;
			}
			break;
		}

		while(true)
		{
			cout<<"Please enter side B: ";
			cin>>sideB;
			if (sideB < 0)
			{
				cout<<"Value entered must be POSITIVE!"<<endl;
				continue;
			}
			break;
		}

		while(true)
		{
			cout<<"Please enter side C: ";
			cin>>sideC;
			if (sideC < 0)
			{
				cout<<"Value entered must be POSITIVE!"<<endl;
				continue;
			}
			break;
		}

		checkEquilateral(sideA, sideB, sideC);
		checkIsosceles(sideA, sideB, sideC);
		checkRight(sideA, sideB, sideC);
		if(deter1 == 1 && deter2 == 1 && deter3 == 1)
		{
			cout<<"This is a OTHER kind of triangle, not Isosceles, not Right, and not Equilateral."<<endl;
		}

		cout<<"Would you like to repeat(1 - Yes, 2 - No): ";
		cin>>choice;
		if (choice == 1)
		{
			continue;
		}else if (choice == 2){
			break;
		}
	}
}

/*
Please enter side A: 1
Please enter side B: 2
Please enter side C: 3
This is a OTHER kind of triangle, not Isosceles, not Right, and not Equilateral.
Would you like to repeat(1 - Yes, 2 - No): 1
Please enter side A: 3
Please enter side B: 4
Please enter side C: 5
This is a right triangle!
Would you like to repeat(1 - Yes, 2 - No): 1
Please enter side A: 3
Please enter side B: 3
Please enter side C: 1
This is an Isosceles triangle!
Would you like to repeat(1 - Yes, 2 - No): 1
Please enter side A: 1
Please enter side B: -10
Value entered must be POSITIVE!
Please enter side B: -100
Value entered must be POSITIVE!
Please enter side B: 1
Please enter side C: 1
This is an Equilateral triangle! (all sides are equal)
Would you like to repeat(1 - Yes, 2 - No): 2

Process returned 0 (0x0)   execution time : 46.929 s
Press any key to continue.
*/
