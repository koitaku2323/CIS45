//Program name: p51
//Name: Ryan Yee
//Date: 07/22/2020
//Description: MPG with Function (15pts) 
//Write a program that will read the number of LITERS of gasoline consumed by the user's car, 
//and the number of MILES traveled by the car.
//The program will then output the number of MILES PER GALLON that the car delivered.
//Your program should allow the user to REPEAT this calculation.
//Define a function to compute the number of miles per gallon.

#include<iostream>
using namespace std;

double mpg(double miles, double liters)
{
	double gallon = liters*0.264179;
	return miles/gallon;
}

int main()
{
	while (true)
	{
		int choice;
		double miles, liters, miles2, liters2;
		cout<<"Please enter the number of liters of gasoline consumed by the first car: ";
		cin>>liters;
		cout<<"Please enter the number of miles traveled by the first car: ";
		cin>>miles;
		cout<<"The first car delivered: "<<mpg(miles,liters)<<" miles per gallon."<<endl;
		double firstCar = mpg(miles,liters);
		cout<<"Please enter the number of liters of gasoline consumed by the second car: ";
		cin>>liters2;
		cout<<"Please enter the number of miles traveled by the second car: ";
		cin>>miles2;
		cout<<"The second car delivered: "<<mpg(miles2,liters2)<<" miles per gallon."<<endl;
		double secondCar = mpg(miles2,liters2);
		if(firstCar > secondCar)
		{
			cout<<"The first car has the better fuel efficiency."<<endl;
		}else{
			cout<<"The second car has the better fuel efficiency."<<endl;
		}
		cout<<"Would you like to calculate it again? (Yes - 1, No - 2)";
		cin>>choice;
		if (choice == 1)
		{
			continue;
		}else if (choice == 2){
			break;
		}
	}
}

/*
Please enter the number of liters of gasoline consumed by the first car: 40
Please enter the number of miles traveled by the first car: 10
The first car delivered: 0.946328 miles per gallon.
Please enter the number of liters of gasoline consumed by the second car: 50
Please enter the number of miles traveled by the second car: 10
The second car delivered: 0.757062 miles per gallon.
The first car has the better fuel efficiency.
Would you like to calculate it again? (Yes - 1, No - 2)1
Please enter the number of liters of gasoline consumed by the first car: 50
Please enter the number of miles traveled by the first car: 10
The first car delivered: 0.757062 miles per gallon.
Please enter the number of liters of gasoline consumed by the second car: 40
Please enter the number of miles traveled by the second car: 10
The second car delivered: 0.946328 miles per gallon.
The second car has the better fuel efficiency.
Would you like to calculate it again? (Yes - 1, No - 2)2

Process returned 0 (0x0)   execution time : 18.116 s
Press any key to continue.
*/