//Program name: p16
//Name: Ryan Yee
//Date: 06/25/2020
//Description: Rock Paper Scissors
//Write a program to simulate rock-paper-scissors game.
//Each players enters 'R', 'P', 'S' or 1, 2, 3 for Rock, Paper, Scissors.
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int player;
	cout<<"This is a rock-paper-scissors game simulation.\n";
	cout<<"Enter Rock(r), Paper(p) or Scissors(s): ";
	cin>>player;
	int iseed = time(NULL);
	srand(iseed);
	int computer = 1 + rand()%3;

	if (player == 1 && computer == 1)
	{
		cout<<"Player 1: Rock\n";
		cout<<"Computer: Rock\n";
		cout<<"Tie!\n";
		}
	if (player == 1 && computer == 2)
	{
		cout<<"Player 1: Rock\n";
		cout<<"Computer: Paper\n";
		cout<<"Computer wins, Paper covers rock!\n";
		}
	if (player == 1 && computer == 3)
	{
		cout<<"Player 1: Rock\n";
		cout<<"Computer: Scissors\n";
		cout<<" Player 1 wins, Rock breaks Scissors!\n";
		}
	if (player == 2 && computer == 1)
	{
		cout<<"Player 1: Paper\n";
		cout<<"Computer: Rock\n";
		cout<<"Player 1 wins, Paper covers rock!\n";
		}
	if (player == 2 && computer == 2)
	{
		cout<<"Player 1: Paper\n";
		cout<<"Computer: Paper\n";
		cout<<"Tie!\n";
		}
	if (player == 2 && computer == 3)
	{
		cout<<"Player 1: Paper\n";
		cout<<"Computer: Scissors\n";
		cout<<"Computer wins, Scissors cut paper!\n";
		}
	if (player == 3 && computer == 1)
	{
		cout<<"Player 1: Scissors\n";
		cout<<"Computer: Rock\n";
		cout<<"Computer wins, Rock breaks Scissors!\n";
		}
	if (player == 3 && computer == 2)
	{
		cout<<"Player 1: Scissors\n";
		cout<<"Computer: Paper\n";
		cout<<"Player 1 wins, Scissors cut paper!\n";
		}
	if (player == 3 && computer == 3)
	{
		cout<<"Player 1: Scissors\n";
		cout<<"Computer: Scissors\n";
		cout<<"Tie!\n";
		}

}

/*
This is a rock-paper-scissors game simulation.
Enter Rock(r), Paper(p) or Scissors(s): 2
Player 1: Paper
Computer: Scissors
Computer wins, Scissors cut paper!

Process returned 0 (0x0)   execution time : 0.970 s
Press any key to continue.
*/
/*
This is a rock-paper-scissors game simulation.
Enter Rock(r), Paper(p) or Scissors(s): 1
Player 1: Rock
Computer: Paper
Computer wins, Paper covers rock!

Process returned 0 (0x0)   execution time : 1.650 s
Press any key to continue.
*/
/*
This is a rock-paper-scissors game simulation.
Enter Rock(r), Paper(p) or Scissors(s): 3
Player 1: Scissors
Computer: Scissors
Tie!

Process returned 0 (0x0)   execution time : 2.551 s
Press any key to continue.
*/
/*
This is a rock-paper-scissors game simulation.
Enter Rock(r), Paper(p) or Scissors(s): 1
Player 1: Rock
Computer: Scissors
 Player 1 wins, Rock breaks Scissors!

Process returned 0 (0x0)   execution time : 0.891 s
Press any key to continue.
*/