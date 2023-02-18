#include<iostream>
using namespace std;

struct stud{
	int id;
	int testscors[3];
	// structure members
};
stud s1; // structure object OR variables
int main()
{
	s1.id=978;
	int sum=0;
	cout<<"ID : "<<s1.id<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<"ENter score: ";
		cin>>s1.testscors[i];
		cout<<endl;
		sum = sum + s1.testscors[i];
	}
	cout<<"Total score: "<<sum;	
}
