/*
Write a class named Dice that contains a data member “value”. In the default
constructor initialize the value with 0. The class should contain a method
named roll(). This method generates a random no between 1 and 6 (for the
dice), updates the value of dice and displays it. If the value generated is equal
to 6 then a message “Chakkaaaa” should display. Also implement the getter
and setter method for dice.

*/


#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Dice{
	private:
		int value;
	public:
		int getroll(){
			return value;
		}
		void setroll(int value){
			this->value=value;
		}
			
		int roll()
		{ 
			srand(time(0));
			int randomNumber = rand() % 6 + 1;	
			return randomNumber;		
		}
};

int main()
{
	Dice d1;
	char choice,choice2;
	cout<<"Taso dice Roll kaval ghvary? Y/N :";
	cin>>choice2;
	if (choice2=='y' || choice2=='Y')
	{
	
	do{
		int randmo=d1.roll();
		d1.setroll(randmo);
		if(randmo==6)
		{
		cout<<randmo<<" Chakkaaa\n\n";
		}
		else 
		{
			cout<<randmo<<" Better Luck next time.\n\n";
		}
		cout<<" \nDo you want to roll the dice? Y/N : ";
		cin>>choice;
		}while(choice=='y'  || choice=='Y')	;
		if(choice=='n' || choice=='N')
		{
			cout<<"\nManana zamoung program use kolo dapara!! ";
		}
	}
	else
	{
		cout<<"No problem!";
	}
	}
