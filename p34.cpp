//Program name: p34
//Name: Ryan Yee
//Date: 07/10/2020
//Description: VOID function with one PARAMETER (use nested loops) 
//Write a VOID function with a NAME "crosses" and a PARAMETER "numCrosses"
//The function outputs as many rows as there are crosses. 

#include<iostream>
using namespace std;

void crosses(int numCrosses)
{
	for (int row = 0; row < numCrosses; row++)
	{
		cout<<"+";
		for (int j = 0; j < row; j++)
		{
			cout<<" +";
		}
		cout<<endl;
	}
}

int main()
{
	int numberOfStars;
	cout<<"How many rows of stars do you want? ";
	cin>>numberOfStars;
	crosses(numberOfStars);

	return 0;
}

/*
How many rows of stars do you want? 10
+
+ +
+ + +
+ + + +
+ + + + +
+ + + + + +
+ + + + + + +
+ + + + + + + +
+ + + + + + + + +
+ + + + + + + + + +

Process returned 0 (0x0)   execution time : 4.259 s
Press any key to continue.
*/