//Program name: p29
//Name: Ryan Yee
//Date: 07/8/2020
//Description: Practice Arithmetic Skills (if/else , loop) 
//Write a program to let a child practice arithmetic skills.
//The program should first ask for what kind of practice is wanted: +, -, * (no division).
//Two random numbers will be generated (0 - 9).
//If the child answers incorrectly,  the problem should be repeated (same numbers used) until they 
//get it right. 
//If the child answers the question correctly, a message should appear to congratulate them.
//At the end of the program, it should ask the child if they want to try again, which will let the 
//user repeat the program as many times as desired.

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int iseed = time(NULL);
	srand(iseed);
	int min = 0;
	int max = 9;
	int num1, num2;
	int choice, answer, replay;
	while(choice != 0)
	{
		cout<<"Would you like to add(1), subtract(2) or multiply(3): ";
		cin>>choice;
		while(choice == 1)
		{
			num1 = min + rand() % (max-min + 1);
			num2 = min + rand() % (max-min + 1);
			cout<<"What is "<<num1<<" + "<<num2<<" equal to: ";
			cin>>answer;
			if(num1 + num2 == answer)
			{
				cout<<"Correct! Would you like to try again?(1 for Yes, 2 for No): ";
				cin>>replay;
				if(replay == 2)
				{
					cout<<"Thanks for playing!"<<endl;
					choice = 0;
					break;
				}else{
					break;
				}
			}else{
				cout<<"That is incorrect, ";
			}
		}
		while(choice == 2)
		{
			num1 = min + rand() % (max-min + 1);
			num2 = min + rand() % (max-min + 1);
			cout<<"What is "<<num1<<" - "<<num2<<" equal to: ";
			cin>>answer;
			if(num1 - num2 == answer)
			{
				cout<<"Correct! Would you like to try again?(1 for Yes, 2 for No): ";
				cin>>replay;
				if(replay == 2)
				{
					cout<<"Thanks for playing!"<<endl;
					choice = 0;
					break;
				}else{
					break;
				}
			}else{
				cout<<"That is incorrect, ";
			}
		}
		while(choice == 3)
		{
			num1 = min + rand() % (max-min + 1);
			num2 = min + rand() % (max-min + 1);
			cout<<"What is "<<num1<<" * "<<num2<<" equal to: ";
			cin>>answer;
			if(num1 * num2 == answer)
			{
				cout<<"Correct! Would you like to try again?(1 for Yes, 2 for No): ";
				cin>>replay;
				if(replay == 2)
				{
					cout<<"Thanks for playing!"<<endl;
					choice = 0;
					break;
				}else{
					break;
				}
			}else{
				cout<<"That is incorrect, ";
			}
			
		}
	}
}

/*
Would you like to add(1), subtract(2) or multiply(3): 1
What is 4 + 9 equal to: 13
Correct! Would you like to try again?(1 for Yes, 2 for No): 1
Would you like to add(1), subtract(2) or multiply(3): 2
What is 5 - 9 equal to: -4
Correct! Would you like to try again?(1 for Yes, 2 for No): 1
Would you like to add(1), subtract(2) or multiply(3): 3
What is 5 * 9 equal to: 45
Correct! Would you like to try again?(1 for Yes, 2 for No): 1
Would you like to add(1), subtract(2) or multiply(3): 1
What is 8 + 9 equal to: 11
That is incorrect, What is 3 + 8 equal to: 4
That is incorrect, What is 0 + 9 equal to: 9
Correct! Would you like to try again?(1 for Yes, 2 for No): 2
Thanks for playing!

Process returned 0 (0x0)   execution time : 47.100 s
Press any key to continue.
*/