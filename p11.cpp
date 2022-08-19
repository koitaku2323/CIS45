//Program name: p11
//Name: Ryan Yee
//Date: 06/24/2020
//Description: Chapter 2 Sample Program
// Implement (write / run) Sample program on Display 2.5

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string middle_name, pet_name;
	string alter_ego_name;

	cout<<"Enter your middle name and the name of your pet.\n";
	cin>> middle_name;
	cin>> pet_name;

	alter_ego_name = pet_name + " " + middle_name;

	cout<<"The name of your alter ego is ";
	cout<< alter_ego_name << "."<<endl;

	return 0;
}

/*
Enter your middle name and the name of your pet.
hsien-chun
loulou
The name of your alter ego is loulou hsien-chun.

Process returned 0 (0x0)   execution time : 33.034 s
Press any key to continue.
*/
