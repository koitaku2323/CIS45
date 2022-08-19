//Program name: p57
//Name: Ryan Yee
//Date: 07/23/2020
//Description: Arrays Min, Max, Average
//Ask the user to enter any 7 numbers into an array of float type, in any order.
//Show all the entered numbers, then find the Minimum, Maximum, and Average of all the numbers in 
//the array.

#include <iostream>
using namespace std;

float temp1, temp2;
float largest, smallest, sum = 0;

int main()
{
	float array[7];

	for (int i=0; i < 7; i++)
	{
		cout<<"Please enter number "<<i+1<<": ";
		cin>>array[i];	
		while (true)
		{
			if (i == 0){
				smallest = array[i];
				largest = array[i];
			}
			else if (array[i] < smallest){
				smallest = array[i];
			} else if (array[i] > largest){
				largest = array[i];
			}
			
			sum = sum + array[i];
			break;
		}
	}

	cout<<"The numbers you entered are: ";
	for (int j = 0; j < 7; j++)
	{
		cout<<array[j];
		if (j < 7 - 1)
		{
			cout<<", ";
		}
	}

	cout<<endl;
	cout<<"The largest of the 7 numbers is: "<<largest<<endl;
	cout<<"The smallest of the 7 numbers is: "<<smallest<<endl;
	cout<<"The average of the 7 numbers is: "<<sum/7<<endl;

}

/*
Please enter number 1: 20
Please enter number 2: 50
Please enter number 3: 30
Please enter number 4: 40
Please enter number 5: 80
Please enter number 6: 70
Please enter number 7: 10
The numbers you entered are: 20, 50, 30, 40, 80, 70, 10
The largest of the 7 numbers is: 80
The smallest of the 7 numbers is: 10
The average of the 7 numbers is: 42.8571

Process returned 0 (0x0)   execution time : 14.441 s
Press any key to continue.
*/
