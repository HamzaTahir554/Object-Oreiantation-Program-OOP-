/* Write a program that uses a structure named MovieData to store the following
information about a movie: Title, Director, Year Released. In main, create two
variables of the structure. The program should contain a function named
createMovieData() that will store values in the struct members from the user
and then returns the structure back to main. The program should contain
another function named displayMovieData() that takes the structure as an
argument and displays the information about the movie in a clearly formatted
manner.*/

#include<iostream>
#include<fstream>
using namespace std;
//structure declaration 
struct MovieData{
	string title; // These are the structure members
	string director;
	int year;
	
	void DisplayMovieData() // Function to print out the structure data
	{
		cout<<"Title : "<<title<<endl;
		cout<<"Director : "<<director<<endl;
		cout<<"Releasing Date : "<<year<<endl;
	}
};

int createMovieData(MovieData Movie1,MovieData Movie2) // Function To Create data Or user input
{
	
	cout<<"Enter Movie Title : ";
	getline(cin,Movie1.title);
	cout<<"Enter Director Name : ";
	getline(cin,Movie1.director);
	cout<<"Releasing Date : ";
	cin>>Movie1.year;	
	
	int choice;
	cout<<"\n\n"<<"Enter Second Movie Data: "<<endl;
	fflush(stdin);
	cout<<"Enter Movie Title : ";
	getline(cin,Movie2.title);
	cout<<"Enter Director Name : ";
	getline(cin,Movie2.director);
	cout<<"Releasing Date : ";
	cin>>Movie2.year;
	
	cout<<" \n\n"<<"_____________________________________________________________________________________"<<endl;
	cout<<"Press 1 to display Movie 1 Data. \nPress 2 to display movie 2 data.\n";
	cin>>choice;
	if(choice==1)
	{
		Movie1.DisplayMovieData(); // there we use displayMovieData function to show data on your screen
	}
	else if(choice==2)
	{
		Movie2.DisplayMovieData(); // there we use displayMovieData function to show data on your screen
	}
	else
	{
		cout<<"Invalid Data";
	}
}
int main()
{
	MovieData Movie1,Movie2; // structure Objects also called variables
	createMovieData(Movie1,Movie2);	// declare funtion in main and give the arguments to parameter 
}
