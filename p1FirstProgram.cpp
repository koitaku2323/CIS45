//Program name: p1
//Name: Ryan Yee
//Date: 06/16/2020
//Description: Sample C++ Program
#include <iostream>
using namespace std;

int main()
{
	int number_of_pods, peas_per_pod, total_peas;

	cout<<"Press return after entering a number.\n";
	cout<<"Enter the number of pods:\n";
	cin>> number_of_pods;
	cout<<"Enter the number of peas in a pod:\n";
	cin>> peas_per_pod;

	total_peas = number_of_pods * peas_per_pod;

	cout<<"If you have ";
	cout<<number_of_pods;
	cout<<" peas pods\n";
	cout<<"and ";
	cout<<peas_per_pod;
	cout<<" peas in each pod, then \n";
	cout<<"you have ";
	cout<<total_peas;
	cout<<" peas in all the pods.\n";
	return 0;
}

/*
Press return after entering a number.
Enter the number of pods:
10
Enter the number of peas in a pod:
9
If you have 10 peas pods
and 9 peas in each pod, then
you have 90 peas in all the pods.

Process returned 0 (0x0)   execution time : 21.937 s
Press any key to continue.
*/
