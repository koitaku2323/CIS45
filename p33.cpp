//Program name: p33
//Name: Ryan Yee
//Date: 07/10/2020
//Description: ! through ~ (loop)
//Write a program that displays the characters in the ASCII character table from ! to ~. 
//Display ten characters per line.
//The characters are separated by exactly one space.


#include<iostream>
using namespace std;

int main()
{
	char asciiCharacter;
	int j = 0;
	
	for (int i = 33; i < 127; i++)
	{
		asciiCharacter = i;
		cout<<asciiCharacter<<" ";
		j++;
		if (j % 10 == 0)
		{
			cout<<"\n";
		}
	}
}

/*
! " # $ % & ' ( ) *
+ , - . / 0 1 2 3 4
5 6 7 8 9 : ; < = >
? @ A B C D E F G H
I J K L M N O P Q R
S T U V W X Y Z [ \
] ^ _ ` a b c d e f
g h i j k l m n o p
q r s t u v w x y z
{ | } ~
Process returned 0 (0x0)   execution time : 0.100 s
Press any key to continue.
*/