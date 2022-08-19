//Program name: p42
//Name: Ryan Yee
//Date: 07/14/2020
//Description: Prime Numbers
//Write a program that finds and prints all prime numbers between 3 to 100.
//A prime number is a number that can be evenly divided only by 1 and itself.

#include<iostream>
using namespace std;

int checkPrime(int num)
{
	int j, m = 0, determination = 0;
	m = num/2;
	for (j = 2; j <= m; j++)
	{
		if (num % j == 0)
		{
			//Number is not prime
			determination = 1;
			break;
		}
	}
	if (determination == 0)
	{
		cout<<num<<" ";
		//Number is prime
	}
}

int main()
{
	for (int i = 3; i <= 100; i++)
	{
		checkPrime(i);
	}
	return 0;
}

/*
3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
Process returned 0 (0x0)   execution time : 0.205 s
Press any key to continue.
*/