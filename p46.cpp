//Program name: p46
//Name: Ryan Yee
//Date: 07/21/2020
//Description: bool monkeyTrouble(bool Asmile, bool Bsmile)
//We have two monkeys, A and B, and the parameters Asmile and Bsmile indicate if each is smiling. 
//We are in trouble if they are both smiling or if neither of them is smiling. 
//Return True if we are in trouble. 

#include<iostream>
using namespace std;

bool monkeyTrouble(bool Asmile, bool Bsmile)
{
	if ((Asmile == true && Bsmile == true)||(Asmile != true && Bsmile != true))
	{
		return true;
	}else{
		return false;
	}

}

int main()
{
	cout<<monkeyTrouble(true, true)<<endl;
	cout<<monkeyTrouble(false, false)<<endl;
	cout<<monkeyTrouble(true, false)<<endl;
	cout<<monkeyTrouble(false, true)<<endl;

	return 0;
}

/*
1
1
0
0

Process returned 0 (0x0)   execution time : 0.090 s
Press any key to continue.
*/