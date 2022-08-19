//Program name: p7
//Name: Ryan Yee
//Date: 06/18/2020
//Description: Voting (if/else) 
// Write a program to determine  the user can vote. The program will ask the user a series 
// of questions - age, citizenship and registration. The user will receive a message as to 
// whether or not s/he may vote -- yes, no (with a reason - too young, not a citizen, hasn't 
// registered to vote).

#include<iostream>
using namespace std;

int main()
{
	int citizen, age, registered;
	cout<<"This program determines whether you are able to vote.\n";
	cout<<"Are you a citizen?(1-yes/2-no)";
	cin>>citizen;
	cout<<"How old are you? ";
	cin>>age;
	cout<<"Are you registered?(1-yes/2-no)";
	cin>>registered;
	if (citizen == 1 && age >= 18 && registered == 1)
		cout<<"Yes, you are qualified to vote!"<<endl;
	  else if  (citizen != 1 && age >= 18 && registered == 1)
		cout<<"No, you are not qualified to vote because you are not a citizen!"<<endl;
	  else if  (citizen == 1 && age < 18 && registered == 1)
		cout<<"No, you are not qualified to vote because you are not an adult, yet!"<<endl;
	  else if  (citizen == 1 && age >= 18 && registered != 1)
		cout<<"No, you are not qualified to vote because you are not registered!"<<endl;
	  else if  (citizen != 1 && age < 18 && registered == 1)
		cout<<"No, you are not qualified to vote because you are not a citizen and that you are under 18 years old!"<<endl;
	  else if  (age < 18 && registered != 1 && citizen == 1)
		cout<<"No, you are not qualified to vote because you are under 18 years old and not yet registered!"<<endl;
	  else if  (citizen != 1 && registered != 1 && age >= 18)
		cout<<"No, you are not qualified to vote because you are not a citizen and that you haven't registered yet!"<<endl;
	  else  
		cout<<"No, you are not qualified to vote because you are not a citizen nor an adult, nor registered!"<<endl;
	return 0;
}

/*
This program determines whether you are able to vote.
Are you a citizen?(1-yes/2-no)1
How old are you? 16
Are you registered?(1-yes/2-no)1
No, you are not qualified to vote because you are not an adult, yet!

Process returned 0 (0x0)   execution time : 10.452 s
Press any key to continue.
*/
/*
This program determines whether you are able to vote.
Are you a citizen?(1-yes/2-no)1
How old are you? 18
Are you registered?(1-yes/2-no)1
Yes, you are qualified to vote!

Process returned 0 (0x0)   execution time : 4.781 s
Press any key to continue.
*/
/*
This program determines whether you are able to vote.
Are you a citizen?(1-yes/2-no)2
How old are you? 16
Are you registered?(1-yes/2-no)2
No, you are not qualified to vote because you are not a citizen nor an adult, nor registered!

Process returned 0 (0x0)   execution time : 6.941 s
Press any key to continue.
*/
