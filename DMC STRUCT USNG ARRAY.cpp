#include<iostream>
using namespace std;
//  ARRAY TASK
// HOw to make array from structure
struct student{
	string name;
	float gpa;
	int marks; 
	// structure members
};
// exertion >> inserstion <<
int main()
{
	student s[3]; // array from structure
	for(int i=0; i<3; i++)
	{
		cout<<"Enter student " <<i+1<<" name : ";
		cin>>s[i].name;
		cout<<"Enter GPA : ";
		cin>>s[i].gpa;
		cout<<"Enter  marks : ";
		cin>>s[i].marks;
	}
	cout<<"____________________________________________________________________________"<<endl;
	cout<<"____________________________________________________________________________"<<endl<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<"student " <<i+1<<" name : "<<s[i].name<<endl;
		cout<<"GPA : "<<s[i].gpa<<endl;
		cout<<"Marks : "<<s[i].marks<<endl<<endl;
		cout<<"____________________________________________________________________________"<<endl;
	}
}
