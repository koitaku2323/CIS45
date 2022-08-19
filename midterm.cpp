//Program name: Midterm
//Name: Ryan Yee
//Date: 07/15/2020
//Description: Midterm - Two Functions (30pts)
//Write both functions, and test them both from the same main().  
//As always, submit your output at the bottom of your program!
//You must submit 1 cpp file with 2 functions and 1 main in it.
//To receive credit the program must compile and run without any errors!
 
//Function 1:
//Write the function necessary to create and RETURN a random number between 11 and 23, inclusive. 
//Show the returned value in the main(). 
 
//Returning a value, and showing that value from the main, is worth half the points. 
//The other half of the points is making the random number.
 
//Function 2:
//Write a VOID function which takes THREE float PARAMETERS : num1, num2 and num3. 
//The function displays the largest number.

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

float largest;

int randint(int min, int max)
{
	int iseed = time(NULL);
	srand(iseed);
	int randomNum = min + rand() % (max + 1 - min);
	return randomNum;
}

void largestNum(float num1, float num2, float num3)
{
	largest = num1;
	if (num2 > num1)
	{
		largest = num2;
	}
	if(num3 > largest)
	{
		largest = num3;
	}
	cout<<largest<<endl;
}

int main()
{
	cout<<randint(11,23)<<endl;
	largestNum(3.4,7.7,19.2);

	return 0;
}

/*
14
19.2

Process returned 0 (0x0)   execution time : 0.090 s
Press any key to continue.
*/