//Program name: p54
//Name: Ryan Yee
//Date: 07/23/2020
//Description: Arrays and Random Numbers (25pts) 
//Make an ARRAY1 of X random ELEMENTS. 
//Each array ELEMENT has a different random value N. 
//X is a random number between 20 to 30. (This means you have from 20 to 30 array Elements). 
//Must use your randint(min, max) function to return value into X!
//N is a random number between 100 to 200. (This means that each Element is a random number 
//between 100 to 200). 
//Must use your randint(min, max) function to return value into each N!
//Make an ARRAY2 which has the ELEMENTS of ARRAY2 in REVERSE and DOUBLED

#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<ctime>
using namespace std;


int randomNum;
int count;

int randint(int min, int max)
{
	//int iseed = time(NULL);
	//int randomNum;
	//srand((unsigned) time(0));
	randomNum = min + rand() % (max + 1 - min);
	return randomNum;
}

int reverseDoubleArray2();

int main()
{
	int X, N;
	srand((unsigned) time(0));
	X = randint(20,30);
	int array1[X];
	int array2[X];
	cout<<"Making "<<X<<" numbers and storing them in ARRAY1: \n";
	for (int i = 0; i < X; i++)
	{
		array1[i] = randint(100,200);
	}
	for (int j = 0; j < X; j++)
	{
		cout<<"ARRAY1[ "<<j<<" ] = "<<array1[j]<<endl;
	}
	cout<<endl;
	cout<<"Putting the doubled values of ARRAY1 into ARRAY2 in REVERSE: \n";
	count = X-1;
	for (int k = 0; k < X; k++)
	{
		//for (int o = X - 1; o > 0; o = o - 1)
		//{
			//array2[k] = array1[o]*2;
		//}

		//int count = X;
		
		cout<<"ARRAY2[ "<<k<<" ] = "<<array1[count]*2<<endl;
		//array2[k] = array1[X];
		count = count - 1;
		//count = count - 1;
		/*
		for (int l = X; l < 0; l--)
		{
			array2[k] = array1[l]*2;
			cout<<"ARRAY2[ "<<l<<" ] = "<<array2[l]<<endl;
		}
		*/
	}
	//array2[1] = 90;
	/*
	for (int b = 0; b < X; b++)
		{
			cout<<"ARRAY2[ "<<b<<" ] = "<<array2[b]<<endl;
		}
		*/
}

/*
Making 22 numbers and storing them in ARRAY1:
ARRAY1[ 0 ] = 123
ARRAY1[ 1 ] = 198
ARRAY1[ 2 ] = 179
ARRAY1[ 3 ] = 136
ARRAY1[ 4 ] = 180
ARRAY1[ 5 ] = 161
ARRAY1[ 6 ] = 105
ARRAY1[ 7 ] = 110
ARRAY1[ 8 ] = 156
ARRAY1[ 9 ] = 175
ARRAY1[ 10 ] = 124
ARRAY1[ 11 ] = 181
ARRAY1[ 12 ] = 122
ARRAY1[ 13 ] = 182
ARRAY1[ 14 ] = 185
ARRAY1[ 15 ] = 105
ARRAY1[ 16 ] = 122
ARRAY1[ 17 ] = 107
ARRAY1[ 18 ] = 183
ARRAY1[ 19 ] = 177
ARRAY1[ 20 ] = 125
ARRAY1[ 21 ] = 122

Putting the doubled values of ARRAY1 into ARRAY2 in REVERSE:
ARRAY2[ 0 ] = 244
ARRAY2[ 1 ] = 250
ARRAY2[ 2 ] = 354
ARRAY2[ 3 ] = 366
ARRAY2[ 4 ] = 214
ARRAY2[ 5 ] = 244
ARRAY2[ 6 ] = 210
ARRAY2[ 7 ] = 370
ARRAY2[ 8 ] = 364
ARRAY2[ 9 ] = 244
ARRAY2[ 10 ] = 362
ARRAY2[ 11 ] = 248
ARRAY2[ 12 ] = 350
ARRAY2[ 13 ] = 312
ARRAY2[ 14 ] = 220
ARRAY2[ 15 ] = 210
ARRAY2[ 16 ] = 322
ARRAY2[ 17 ] = 360
ARRAY2[ 18 ] = 272
ARRAY2[ 19 ] = 358
ARRAY2[ 20 ] = 396
ARRAY2[ 21 ] = 246

Process returned 0 (0x0)   execution time : 0.125 s
Press any key to continue.
*/
