// pointer Example
// pointer.cpp
#include <iostream>
using namespace std;

void change(int *A);

int main()
{
	int A = 0;
	cout<<"A = "<<A<<endl; // shows the value 0 stored into the memory address of &A
	cout<<"&A = "<<&A<<endl; // shows the memory address of A
	change (&A); // &A passes the adress of A into the function change(..)
	cout<<"A = "<<A<<endl;
}

void change(int *A)
{
	*A = 5; //changes the value of A in the main
}

/*
A = 0
&A = 0x6dfeec
A = 5

Process returned 0 (0x0)   execution time : 0.150 s
Press any key to continue.
*/