//Program name: p43(2)
//Name: Ryan Yee
//Date: 07/14/2020
//Description: Functions 3 Sample Programs
//Display 5.3 (page 56)- write the main() and test he functions using: 0 and another number

#include<iostream>
//using namespace std;

void ice_cream_division(int number, double total_weight);

void ice_cream_division(int number, double total_weight)
{
	using namespace std;
	double portion;
	if (number == 0)
		return;
	portion = total_weight/number;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"Each one receives "
		<<portion<<" ounces of ice cream."<<endl;
}

int main()
{
	ice_cream_division(0, 100.00);
}

/*literally nothing is done

Process returned 0 (0x0)   execution time : 0.080 s
Press any key to continue.
*/

/*but if ice_cream_division(5, 100.00); then:
Each one receives 20.00 ounces of ice cream.

Process returned 0 (0x0)   execution time : 0.090 s
Press any key to continue.
*/