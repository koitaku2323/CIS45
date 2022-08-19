//Program name: p26
//Name: Ryan Yee
//Date: 07/2/2020
//Description: Number Guessing Game 
//Write a number guessing name. The computer will generate a random number between 0 and 100.
//The user will be prompted to guess the number.
//If the number guessed is greater than the random number, an appropriate message will appear, 
//with a similar message for low guesses.
//The user should keep guessing until the correct number is guessed.
//An appropriate message should congratulate the user for guessing the correct number.

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int iseed = time(NULL);
	srand(iseed);
	int min = 0;
	int max = 100;
	int randomNum = min + rand() % (max-min + 1);
	int guess, count = 0;
	cout<<"For cheating reference, random number generated was: "<<randomNum<<endl;
	while (true)
	{
		cout<<"Please enetr a guess b/w 0 - 100: ";
		cin>>guess;
		if (guess>randomNum)
		{
			cout<<"No, it is lower than that.\n";
			count++;
		}
		if (guess<randomNum)
		{
			cout<<"No, it is higher than that.\n";
			count++;
		}
		if (guess == randomNum)
		{
			count++;
			cout<<"Correct, you got it...It took you "<<count<<" guesses!"<<endl;
			break;
		}
	}
}

/*
For cheating reference, random number generated was: 57
Please enetr a guess b/w 0 - 100: 40
No, it is higher than that.
Please enetr a guess b/w 0 - 100: 60
No, it is lower than that.
Please enetr a guess b/w 0 - 100: 50
No, it is higher than that.
Please enetr a guess b/w 0 - 100: 10
No, it is higher than that.
Please enetr a guess b/w 0 - 100: 57
Correct, you got it...It took you 5 guesses!

Process returned 0 (0x0)   execution time : 16.791 s
Press any key to continue.
*/