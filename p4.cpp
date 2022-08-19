//Program name: p4
//Name: Ryan Yee
//Date: 06/17/2020
//Description: Print a C using Input letter
// Write a program that asks for a character INPUT from the keyboard and then OUTPUTS a 
// large block letter "C" composed of that character. 

#include <iostream>
using namespace std;

int main()
{
	char f;
	cout<<"Please enter a character from your keyboard: ";
	cin>>f;
	cout<<"**********************************************"<<"\n";
	cout<<" "<<"\n";
	cout<<" "<<"\n";
	cout<<"            "<<f<<" "<<f<<" "<<f<<"\n";          
    cout<<"          "<<f<<"      "<<f<<"\n";
    cout<<"         "<<f<<" "<<"\n";    
    cout<<"        "<<f<<" "<<"\n";   
    cout<<"        "<<f<<"\n";                          
    cout<<"        "<<f<<"\n";                                
    cout<<"        "<<f<<"\n";        
    cout<<"         "<<f<<"\n";
    cout<<"          "<<f<<"      "<<f<<"\n";
    cout<<"            "<<f<<" "<<f<<" "<<f<<"\n";
	cout<<" "<<"\n";
	cout<<" "<<"\n";
	cout<<"**********************************************"<<"\n";
	cout<<"Computer Science is Cool Stuff!!";
	return 0;
}

/*
Please enter a character from your keyboard: x
**********************************************


            x x x
          x      x
         x
        x
        x
        x
        x
         x
          x      x
            x x x


**********************************************
Computer Science is Cool Stuff!!
Process returned 0 (0x0)   execution time : 3.510 s
Press any key to continue.
*/