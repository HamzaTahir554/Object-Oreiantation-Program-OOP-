#include<iostream>
#include<string>
using namespace std;
int main()
{
	// how to find the size of string
	string letter = "abcdefghijkl      mnopqrstuvwxyz";// spaces is also count
	
	cout<<letter.length()<<endl;
	cout<<letter[5]; // showing special element of string
}
