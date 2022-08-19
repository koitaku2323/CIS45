//Program name: p9
//Name: Ryan Yee
//Date: 06/18/2020
//Description: Letter Grades
// Write a program which asks the user for a student's grade as a percent, 
// and then returns their letter grade.

#include<iostream>
using namespace std;

int main()
{
	int grade;
	string letterGrade;
	cout<<"Please enter your grade in percent: ";
	cin>>grade;
	if (grade >= 90)
		letterGrade="A";
	if (grade < 90 && grade >= 80)
		letterGrade="B";
	if (grade < 80 && grade >= 70)
		letterGrade="C";
	if (grade <70 && grade >= 60)
		letterGrade="D";
	else if (grade < 60)
		letterGrade="F";

	cout<<"You have a '"<<letterGrade<<"'\n";

	return 0;

}

/*
Please enter your grade in percent: 90
You have a 'A'

Process returned 0 (0x0)   execution time : 2.048 s
Press any key to continue.
*/
/*
Please enter your grade in percent: 63
You have a 'D'

Process returned 0 (0x0)   execution time : 2.505 s
Press any key to continue.
*/
/*
Please enter your grade in percent: 40
You have a 'F'

Process returned 0 (0x0)   execution time : 3.067 s
Press any key to continue.
*/