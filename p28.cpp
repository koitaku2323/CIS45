//Program name: p28
//Name: Ryan Yee
//Date: 07/8/2020
//Description: Gymnastics Score (loop)
//Write a program to compute a gymnastics competition score.
//There are 4 judges who mark the gymnasts in the range of 0 to 10, and the overall score is the 
//average of the marks.
//An error message should appear if a mark is entered that is out of the range (0-10) and then ask 
//the user to input a valid mark again.
//Output the average.
//Format the output nicely, so it is easy to read and to follow.

#include<iostream>
using namespace std;

int main()
{
	double i = 0, mark, sum = 0;
	while (i < 4)
	{	
		cout<<"Please enter the score: ";
		cin>>mark;
		if (mark<=10 && mark>=0)
		{
			sum = sum + mark;
			i++;
			
		}else{
			cout<<"Invalid: Please enter a score from 0 to 10"<<endl;
		}
	}
	cout<<"The average of the four score is: "<<sum/i<<endl;
	
}

/*
Please enter the score: 15
Invalid: Please enter a score from 0 to 10
Please enter the score: 5
Please enter the score: 6
Please enter the score: 7
Please enter the score: 8
The average of the four score is: 6.5

Process returned 0 (0x0)   execution time : 5.954 s
Press any key to continue.
*/