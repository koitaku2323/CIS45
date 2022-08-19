//Program name: p13
//Name: Ryan Yee
//Date: 06/24/2020
//Description: Compute Distance (input/output) 
// Write a program that allows the user to enter a time in seconds.
// The program then outputs distance of how far (feet) an object will land.

#include<iostream>
using namespace std;

int main()
{
	int time, distance, acceleration, averageDistance;
	cout<<"Please enter time in seconds: ";
	cin>>time;
	acceleration = 32;
	distance = acceleration * time * time;
	averageDistance = distance / 2;
	cout<<"Distance = (32*("<<time<<"^2))/2 = "<<averageDistance<<" feet";

}

/*
Please enter time in seconds: 2
Distance = (32*(2^2))/2 = 64 feet
Process returned 0 (0x0)   execution time : 1.273 s
Press any key to continue.
*/