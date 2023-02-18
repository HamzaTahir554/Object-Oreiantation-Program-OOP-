#include<iostream>
using namespace std;
int main()
{
	int no1,no2;
	char a;
	cout<<"Enter first value : ";
	cin>>no1;
	cout<<"Enter Second Value : ";
	cin>>no2;
	cout<<"OPerator : ";
	cin>>a;
	
	if(a=='+')
	{
		cout<<"Sum of Two number : "<<no1+no2;
	}
	else if(a=='-')
	{
		cout<<"Difference of Two number : "<<no1-no2;
	}
	else if(a=='*')
	{
		cout<<"Multiply of Two number : "<<no1*no2;
	}
	else if(a=='/')
	{
		cout<<"Sum of Two number : "<<no1/no2;
	}
	else
	{
		cout<<" Math ERROR";
	}
}
