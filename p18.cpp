//Program name: p18
//Name: Ryan Yee
//Date: 06/25/2020
//Description: Astrology program 
//Write a program that asks the user for day and month of a birthday.
//The program then tells the Zodiac signs that will be compatible with that birthday. 

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int day, month;
	cout<<"Please enter day of birth: ";
	cin>>day;
	cout<<"Please enter month of birth: ";
	cin>>month;

	if (month == 3 && day >=21 || month == 4 && day <= 19)
    	cout<<"You are Aries, Fire group, compatible with Aries, Leo, Sagittarius.";
	if (month == 4 && day >=20|| month == 5 && day <= 20)
    	cout<<"You are Taurus, Earth group, compatible with Taurus, Virgo, Capriorn.";
	if (month == 5 && day >=21|| month == 6 && day <= 21)
    	cout<<"You are Gemini, Air group, compatible with Gemini, Libra, Aquarius.";
	if (month == 6 && day >=22|| month == 7 && day <= 22)
   		cout<<"You are Cancer, Water group, compatible with Cancer, Sorpio, Pisces.";
	if (month == 7 && day >=23|| month == 8 && day <= 22)
    	cout<<"You are Leo, Fire group, compatible with Aries, Leo, Sagittarius.";
	if (month == 8 && day >=23||month == 9 && day <= 22)
    	cout<<"You are Virgo, Earth group, compatible with Taurus, Virgo, Capriorn. ";
	if (month == 9 && day >=23|| month == 10 && day <= 23)
    	cout<<"You are Libra, Air group, compatible with Gemini, Libra, Aquarius. ";
	if (month == 10 && day >=24|| month == 11 && day <= 21)
    	cout<<"You are Sorpio, Water group, compatible with Cancer, Sorpio, Pisces.";
	if (month == 11 && day >=22|| month == 12 && day <= 21)
    	cout<<"You are Sagittarius, Fire group, compatible with Aries, Leo, Sagittarius.";
	if (month == 12 && day >=22|| month == 1 && day <= 19)
    	cout<<"You are Capriorn, Earth group, compatible with Taurus, Virgo, Capriorn.";
	if (month == 1 && day >=20|| month == 2 && day <= 18)
    	cout<<"You are Aquarius, Air group, compatible with Gemini, Libra, Aquarius.";
	if (month == 2 && day >=19|| month == 3 && day <= 20)
    	cout<<"You are Pisces, Water group, compatible with Cancer, Sorpio, Pisces.";

}
/*
Please enter day of birth: 3
Please enter month of birth: 2
You are Aquarius, Air group, compatible with Gemini, Libra, Aquarius.
Process returned 0 (0x0)   execution time : 4.940 s
Press any key to continue.
*/
/* Don't understand why it doesn't work this way
	int day, month;
	string zod, compa;
	string fire = "Aries, Leo, Sagittarius.";
	string earth = "Taurus, Virgo, Capri||n.";
	string air = "Gemini, Libra, Aquarius.";
	string water = "Cancer, S||pio, Pisces.";

int uuu(string zod, string compa)
{
	cout<<"A birthday of "<<month<<" / "<<day<<" had the Zodiac '"<<zod<<"'";
	cout<<zod<<" is compatible with: "<<compa;
}

int main()
{
	

	if (month == 3 && day >=21 || month == 4 && day <= 19){
		zod = "Aries";
		compa.assign(fire);
		std::cout<<compa;
	}
	if (month == 4 && day >=20 || month == 5 && day <= 20){
		zod = "Taurus";
		compa = earth;
	}
    
	if (month == 5 && day >=21 || month == 6 && day <= 21){
		zod = "Gemini";
		compa = air;
	}
    
	if (month == 6 && day >=22 || month == 7 && day <= 22){
		zod = "Cancer";
		compa = water;
	}
    
	if (month == 7 && day >=23 || month == 8 && day <= 22){
		zod = "Leo";
		compa = fire;
	}
  
	if (month == 8 && day >=23 || month == 9 && day <= 22){
		zod = "Virgo";
		compa = earth;
	}
    
	if (month == 9 && day >=23 || month == 10 && day <= 23){
		zod = "Libra";
		compa = air;
	}
    
	if (month == 10 && day >=24 || month == 11 && day <= 21){
		zod = "S||pio";
		compa = water;
	}
    
	if (month == 11 && day >=22 || month == 12 && day <= 21){
		zod = "Sagittarius";
		compa = fire;
	}
    
	if (month == 12 && day >=22 || month == 1 && day <= 19){
		zod = "Capri||n";
		compa = earth;
	}
    
	if (month == 1 && day >=20 || month == 2 && day <= 18){
		//zod = "Aquarius";
		//compa = air;
		uuu(earth, air);


	}
    
	if (month == 2 && day >=19 || month == 3 && day <= 20){
		zod == "Pisces";
		water = compa;
	}
    


	cout<<"Please enter day of birth: ";
	cin>>day;
	cout<<"Please enter month of birth: ";
	cin>>month;
	cout<<"A birthday of "<<month<<" / "<<day<<" had the Zodiac '"<<zod<<"'";
	cout<<zod<<" is compatible with: "<<compa;

}
*/
