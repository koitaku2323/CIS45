//Program name: p31
//Name: Ryan Yee
//Date: 07/8/2020
//Description: Dice (if/else, loop, random) 
//Write a Dice Game program.


#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int iseed = time(NULL);
	srand(iseed);
	int min = 1;
	int max = 6;
	int dice1, dice2, pcSum, finalSum;
	char choice;
	cout<<"Beat the computer!"<<endl;
	while(true)
	{
		dice1 = min + rand() % (max-min + 1);
		dice2 = min + rand() % (max-min + 1);
		cout<<"You rolled a "<<dice1<<" and a "<<dice2<<" (total = "<<dice1 + dice2<<")"<<endl;
		cout<<"Do you want to keep those?(y or n)\n";
		cin>>choice;
		if (choice == 'y')
		{
			finalSum = dice1 + dice2;
			break;
		}else{
			cout<<"Rolling again..."<<endl;
		}
	}
	int pcDice1 = min + rand() % (max-min + 1);
	int pcDice2 = min + rand() % (max-min + 1);
	pcSum = pcDice2 + pcDice1;
	cout<<"The computer rolled "<<pcDice1<<" and "<<pcDice2<<" (Total = "<<pcSum<<")"<<endl;
	if (pcSum > finalSum)
	{
		cout<<"So sorry, You lose."<<endl;
	}
	if (pcSum < finalSum)
	{
		cout<<"Congratuations! You Won!"<<endl;
	}
	if (pcSum == finalSum)
	{
		cout<<"Tied"<<endl;
	}

}

/*
Beat the computer!
You rolled a 5 and a 1 (total = 6)
Do you want to keep those?(y or n)
n
Rolling again...
You rolled a 4 and a 1 (total = 5)
Do you want to keep those?(y or n)
n
Rolling again...
You rolled a 3 and a 4 (total = 7)
Do you want to keep those?(y or n)
y
The computer rolled 5 and 6 (Total = 11)
So sorry, You lose.

Process returned 0 (0x0)   execution time : 7.313 s
Press any key to continue.
*/