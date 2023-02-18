#include<iostream>
using namespace std;
int main()
{
	//Converstion
	// Two Types of Converstion
	// i) implicit
	// ii) Explicit
	
	
	// i) impicit
	int x = 20;
	double y;
	y=x; // Converting data X into y
	cout<<y<<endl;
	
	// ii) Explicit
	y= double(x);
	cout<<y;
}
