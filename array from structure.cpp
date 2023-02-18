#include<iostream>
using namespace std;
// HOw to make array from structure
struct point{
	int x,y;
	// structure members
};

int main()
{
	point arr[10]; // array from structure
	for(int i=0; i<10; i++)
	{
		cout<<"Enter value of x at index "<<i+1<<" : ";
		cin>>arr[i].x;
		cout<<"Enter value of y at index "<<i+1<<" : ";
		cin>>arr[i].y;
	}
}
