//Program name: p38
//Name: Ryan Yee
//Date: 07/14/2020
//Description: Function with TWO PARAMETERS that RETURNS a boolean 
//When squirrels get together for a party, they like to have cigars.
//A squirrel party is successful when the number of cigars is between 40 and 60, inclusive.
//Unless it is the weekend, in which case there is no upper bound on the number of cigars.
//Write a function which Returns True if the party with the given values is successful, or False 
//otherwise.

#include<iostream>
using namespace std;

bool cigarParty(int cigars, bool isWeekend)
{
	if (cigars>=40)
	{
		if(isWeekend = false)
		{
			if (cigars<=60)
			{
				return true;
			}else{
				return false;
			}
		}
		return true;
	}else{
		return false;
	}
}

int main()
{
	cout<<cigarParty(30, false)<<endl;
	cout<<cigarParty(50, false)<<endl;
	cout<<cigarParty(70, true)<<endl;
}

/* 0 = false, 1 = true
0
1
1

Process returned 0 (0x0)   execution time : 0.085 s
Press any key to continue.
*/