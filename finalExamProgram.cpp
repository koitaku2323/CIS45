//Program name: finalExamProgram
//Name: Ryan Yee
//Date: 07/24/2020
//Description: Write a program that makes an array of 25 random integers each from 3 to 7 
//(use your function randint() to generate these numbers).
//The program:
//shows the original array, 
//shows the array in reverse, 
//shows the lowest value in the array,
//shows the highest value in the array, 
//shows the sum of all numbers in the array, 
//shows the average of all number in the array
//shows how many times the number 5 appears in the array
//shows the difference between the First and Last elements of the array
//shows the elements of the array before a specified index
//shows the message "I am now done with CSS45! :)"

#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<ctime>
using namespace std;

int randomNum;
float largest, smallest, sum = 0, sum2 = 0;
int count;
int countFive = 0;
int size = 25;

int randint(int min, int max)
{
	randomNum = min + rand() % (max + 1 - min);
	return randomNum;
}

void showArray ( int a[], int size );   // shows the array in the format "int a [ ] = { 3, 7, 4, ... ,5, 6, 3, 4, 7 } "
void showReverse ( int a[], int size );    // shows the array in reverse using the format "int a [ ] = { 7, 4, 3, 6, 5, ... , 4, 7, 3 } "
int lowest ( int a[], int size );    // finds and returns the lowest value in the array (should be 3)
int highest ( int a[], int size );       // finds and returns the highest value in the array (should be 7)
int sumArray ( int a[], int size );       // calculates and returns the sum of all values in the array
float averageVal ( int a[], int size );     // calculates and returns the average of all values in the array
int count5 ( int a[], int size );     // returns how many times the number 5 appears in the array
int firstMinusLast ( int a[], int size );   // returns the difference between the First Array Element - Last Array Element
void showBeforeIndex( int a [], int size, int index); // shows all array values before a specified index
void done ();   // a function that shows the message "I am now done with CSS1! 

int main()
{
	srand((unsigned) time(0));
	int array1[size];
	cout<<"Making an array of "<<size<<" random numbers from 3 to 7: \n";
	for (int i = 0; i < size; i++)
	{
		array1[i] = randint(3,7);
	}
	showArray(array1, size);
	showReverse(array1, size);
	//Could've done all four functions just by writing this, well I guess redundancy is fairly important too.
	//for (int w=0; w < 25; w++)
	//{
		/*
		while (true)
		{
			if (w == 0){
				smallest = array1[w];
				largest = array1[w];
			}
			else if (array1[w] < smallest){
				smallest = array1[w];
			} else if (array1[w] > largest){
				largest = array1[w];
			}
			
			sum = sum + array1[w];
			break;
		}
		*/
	//}
	cout<<endl;
	cout<<"The largest of the 25 numbers is: "<<highest(array1, size)<<endl;
	cout<<"The smallest of the 25 numbers is: "<<lowest(array1, size)<<endl;
	cout<<"The sum of the 25 numbers is: "<<sumArray(array1, size)<<endl;
	cout<<"The average of the 25 numbers is: "<<averageVal(array1, size)<<endl;
	cout<<"The number 5 appears "<<count5(array1, size)<<" times."<<endl;
	cout<<"The difference between the first and last array elements is : "<<firstMinusLast(array1, size)<<endl;
	int index = 3;
	showBeforeIndex(array1, size, index);

	done();
}

void showArray (int array1[], int size )
{
	cout<<"Original array a[] = { ";
	for (int j = 0; j < size; j++)
	{
		cout<<array1[j];
		if (j < size - 1)
		{
			cout<<", ";
		}else{
			cout<<" }";
		}
	}
}

void showReverse ( int array1[ ], int size )
{
	cout<<endl;
	cout<<"Reversed array a[] = { ";
	count = size - 1;
	for (int k = 0; k < size; k++)
	{
		cout<<array1[count];
		count = count - 1;
		if (k < size - 1)
		{
			cout<<", ";
		}else{
			cout<<" }";
		}
	}
}

int lowest ( int a[], int size )
{
	for (int w=0; w < size; w++)
	{
		while (true)
		{
			if (w == 0){
				smallest = a[w];
			}
			else if (a[w] < smallest){
				smallest = a[w];
			}
			break;
		}
	}
	return smallest;
} 

int highest ( int a[], int size )
{
	for (int e=0; e < size; e++)
	{
		while (true)
		{
			if (e == 0){
				largest = a[e];
			}
			else if (a[e] > largest){
				largest = a[e];
			}
			break;
		}
	}
	return largest;
}   

int sumArray ( int a[], int size )
{
	for (int r=0; r < size; r++)
	{
		while (true)
		{
			sum = sum + a[r];
			break;
		}
	}
	return sum;
}   

float averageVal ( int a[], int size )
{
	for (int t=0; t < size; t++)
	{
		while (true)
		{
			sum2 = sum2 + a[t];
			break;
		}
	}
	return sum2/size;
}   

int count5 ( int a[ ], int size )
{
	for (int y=0; y < size; y++)
	{
		if (a[y] == 5)
		{
			countFive++;
		}
	}
	return countFive;
}

int firstMinusLast ( int a[ ], int size )
{
	return a[0]-a[size-1];
}  

void showBeforeIndex( int a [ ], int size, int index)
{
	cout<<"The array values before index "<<index<<" are: ";
	for (int u = 0; u < index; u++)
	{
		cout<<a[u];
		if (u < index - 1)
		{
			cout<<", ";
		}
	}
}

void done ()
{
	cout<<endl;
	cout<<"I am now done with CSIS45!"<<endl;
}

/*
Making an array of 25 random numbers from 3 to 7:
Original array a[] = { 5, 7, 5, 4, 3, 3, 3, 7, 6, 7, 5, 4, 6, 6, 6, 6, 3, 7, 4, 7, 4, 5, 3, 7, 4 }
Reversed array a[] = { 4, 7, 3, 5, 4, 7, 4, 7, 3, 6, 6, 6, 6, 4, 5, 7, 6, 7, 3, 3, 3, 4, 5, 7, 5 }
The largest of the 25 numbers is: 7
The smallest of the 25 numbers is: 3
The sum of the 25 numbers is: 127
The average of the 25 numbers is: 5.08
The number 5 appears 4 times.
The difference between the first and last array elements is : 1
The array values before index 3 are: 5, 7, 5
I am now done with CSIS45!

Process returned 0 (0x0)   execution time : 0.090 s
Press any key to continue.
*/
