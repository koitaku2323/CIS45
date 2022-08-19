//Program name: p49
//Name: Ryan Yee
//Date: 07/21/2020
//Description: Fibonaci
// Write a C++ program which uses a function
//void Fibonacci(int totalNumbers);
//The function generates as many Fibonaci number as indicated by the parameter totalNumbers.

#include<iostream>
using namespace std;

void Fibonacci()//int totalNumbers)
{
	int t1 = 0, t2 = 1, nextTerm = 0, sum;
    while (nextTerm < 4000000)
    {
        for (int i = 1; i <= totalNumbers; ++i)
        {
        // Prints the first two terms.
            if(i == 1)
            {
                cout<<t1<<" ";
                continue;
            }
        if(i == 2)
        {
            cout<<t2<<" ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        sum = sum + nextTerm
        //cout << nextTerm << " ";
        }
    }

}

int main()
{
	int num;
	//cout<<"How many numbers of the Fibonacci series do you want? ";
	//cin>>num;
	//cout<<"Fibonacci series: "<<endl;
	//Fibonacci(num);
    Fibonacci();
    cout<<sum;
}

/*
How many numbers of the Fibonacci series do you want? 20
Fibonacci series:
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
Process returned 0 (0x0)   execution time : 2.470 s
Press any key to continue.
*/
