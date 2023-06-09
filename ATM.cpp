/*
Write a class name Account, having the data members name, and balance
(declared as private). The class should contains methods depositAmount()
and withdrawAmount(). They both will take the amount as an argument and
peforms the transactions by updating the balance. While withdrawing the
amount check if the amount is less than or equal to balance or not, and do
accordingly. The class should contain the getter and setter methods for both
the data members. Outside the class you must create a function named
createAccount(), that creates an object of a class initialize the values(using
setter methods of the class). And returns the object back to main. After that
you should perform the rest of the transactions. Your program should be
menu driven in a loop. Where the choices must be:
1. Display Balance
2. Deposit Amount
3. Withdraw Amount
4. Exit
*/


#include<iostream>
#include<fstream>
using namespace std;
class Acount{
	// class members
	private:
		string name;
		float balance;
	public:
		// Function member	
	
		string getname()
		{
			return name;
		}
		int getbalance()
		{
			return balance;
		}
		void setname(string n)
		{
			name = n;
		}
		void setbalance(int b)
		{
			balance = b;
		}
		int depositAmount(int amount)
		{
			balance = balance+amount;
			cout<<"\nDeposit successful\n";
		}
		
		int withdrawAmount(int withdraw)
		{
			if(withdraw>balance)
			{
				cout<<"Withdrawal failed: insufficient balance!!\n\n";
			}
			else
			{
				balance= balance-withdraw;
				cout<<"\nWithdrawal successful\n";
			}
		}
};
Acount CreatAcount(){ // Function
		Acount acount;
		string name;
		float intial_balance;
		cout<<"Enter Name : ";
		getline(cin,name);
		cout<<"Enter Intial Balance : ";
		cin>>intial_balance;
		acount.setname(name);
		acount.setbalance(intial_balance);
		return acount;
};

int main()
{
	cout<<"_______________________________________________________________________________________ \n";
	cout<<"\n********************** Welcome To the Fast ATM 24/7 Service ********************* \n";
	cout<<"_________________________________________________________________________________________ \n\n";
	Acount acount = CreatAcount();
	int select;
	float balance;
	float Amount;
	float withdraw;
	do{
		cout<<"\nMenu :\n";
		cout<<"Press 1 : Display Amount.\n";
		cout<<"Press 2 : Deposit Amount.\n";
		cout<<"Press 3 : Withdraw Amount.\n";
		cout<<"Press 0 : Exit.\n\n";
		cout<<"Select Option: ";
		cin>>select;
		if(select==1) // Display Amount
		{
			cout<<"Your Bank Balance is : "<<acount.getbalance();
		}
		else if(select==2) // Deposit Amount
		{
			cout<<"Enter Your Amount : ";
			cin>>Amount;
			acount.depositAmount(Amount);
			cout<<"\nYour Bank Balance is : "<<acount.getbalance()<<"\n";
		}
		else if(select==3) // Withdraw amount
		{
			cout<<"Enter Your Amount : ";
			cin>>withdraw;
			acount.withdrawAmount(withdraw);
			cout<<"\nYour Bank Balance is : "<<acount.getbalance()<<"\n";
		}
	}while(select!=0);
	if(select==0)
	{
		cout<<"_____________________________________________________________________________ \n";
		cout<<"\n********************** Thank You For using our Program ********************* \n";
		cout<<"_____________________________________________________________________________ \n";
	}
	
}
