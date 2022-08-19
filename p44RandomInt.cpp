//Program name: p44
//Name: Ryan Yee
//Date: 07/15/2020
//Description: int randint(int min, int max)
//Write the function with the given prototype which returns a random number between min and max 
//to the main

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int randint(int min, int max)
{
	//int iseed = time(NULL);
	//srand(iseed);
	int randomNum = min + rand() % (max + 1 - min);
	return randomNum;
}

int main()
{
	int iseed = time(NULL);
	srand(iseed);
	for (int i = 0; i < 10; i++)
	{
		cout<<randint(1,30)<<endl;
	}
	return 0;
}

/*
5

Process returned 0 (0x0)   execution time : 0.085 s
Press any key to continue.
*/