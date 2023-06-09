/*Write a program that uses a structure to store the student data (student name,
and an array containing the marks of 3 courses). Your program must have 3
functions.
Display_data(): Take the array of struct as an argument and displays the data
of all students.
Change_Marks(): Takes one student as an argument. Asks the course no and
updated marks from the user. And update the information accordingly.
Calc_Average_Marks(): Take one student variable as an argument and
calculates the average marks of that student.*/

#include<iostream>
#include<fstream>
using namespace std;
// Structure Intialization
struct StudentData{
	string name;
	int marks;  // Structure Members
	
	int Display_Data(StudentData s[]) // Function to Display Data Of student
	{
		cout<<"\n\nStudent Name : "<<s[0].name<<endl;
		for(int i=1; i<4; i++)
		{
			cout<<"Student marks of course "<<i<<" : "<<s[i].marks<<endl;		
		}		
	}
	int Calc_Average_Marks(StudentData s[]) // function to calulate Average Marks
	{
		float Average_Marks=0;
		cout<<"\n\nStudent Name : "<<s[0].name<<endl;
		for(int i=1; i<4; i++)
		{
			cout<<"Student marks of course "<<i<<" : "<<s[i].marks<<endl;
			Average_Marks=(Average_Marks + s[i].marks);
		}
			Average_Marks = Average_Marks/3;
		cout<<"Average Marks : "<<Average_Marks<<endl;		
	}
	int change_Marks(StudentData s[]) // Function to Change Marks of student
	{
		int New_Marks;
		int course_no;
		cout<<"Enter the course no : ";
		cin>>course_no;
		cout<<"Enter the new marks : ";
		cin>>New_Marks;
		cout<<"\n\nStudent Name : "<<s[0].name<<endl;
		for(int i=1; i<4; i++)
		{
			s[course_no].marks= New_Marks;	
		}
		cout<<"\nMarks Updated  Succusefuly \n\nUptated Marks :\n";
		for(int i=1; i<4; i++)
		{
			cout<<"Student marks of course "<<i<<" : "<<s[i].marks<<endl;		
		}	
	}
};


int main()
{
	StudentData s1[4],s2[4],s3[4]; //structure objects OR variables
	// User input data of student 1
	cout<<"Student Name: ";
	getline(cin,s1[0].name);
	for(int i=1; i<4; i++)
	{
		cout<<"Enter student marks for course "<<i<<" : ";
		cin>>s1[i].marks;
	}
	
	//  User input data of student 2
	cout<<"\n\nStudent Name: ";
	fflush(stdin);
	getline(cin,s2[0].name);
	for(int i=1; i<4; i++)
	{
		cout<<"Enter student marks for course "<<i<<" : ";
		cin>>s2[i].marks;
	}
	
		//  User input data of student 3
	cout<<"\n\nStudent Name: ";
	fflush(stdin);
	getline(cin,s3[0].name);
	for(int i=1; i<4; i++)
	{
		cout<<"Enter student marks for course "<<i<<" : ";
		cin>>s3[i].marks;
	}
	int select; // Declare integer to select the menu option
	char sect; // declare character 
	
	do{
	// Display Menu to the User to select their choice
	cout<<"\n\nMENU : \n";
	cout<<"1. Display Student Data.\n";
	cout<<"2. Calculate  Average Marks.\n";
	cout<<"3. Change Marks.\n";
	cout<<"4. Exit Program.\n";
	cout<<"\nPlease Select an option : ";
	cin>>select; // 
	if(select==1) // Display Student Data
	{
		do
		{
		cout<<"\nPlease Enter The Student ID : ";
		cin>>select;
		if(select==1)
		{
			s1[4].Display_Data(s1); // calling function
		}
		else if(select==2)
		{
			s2[4].Display_Data(s2); // calling function
		}
		else if(select==3)
		{
			s3[4].Display_Data(s3); // calling function
		}
		else 
		{
			cout<<" INVALID DATA : ";
		}
		cout<<"Do want TO display another student data : Y/N : ";
		cin>>sect;
		}while(sect=='y' || sect=='Y');
		if(sect=='n' || sect=='N')
		{
			cout<<"";
		}
		else
		{
			cout<<"";
		}
	}
	else if(select==2) // Calculate Avreage MArks
	{
		do{
		cout<<"\nPlease Enter The Student ID : ";
		cin>>select;
		if(select==1)
		{
			s1[4].Calc_Average_Marks(s1); // calling function
		}
		else if(select==2)
		{
			s2[4].Calc_Average_Marks(s2); // calling function
		}
		else if(select==3)
		{
			s3[4].Calc_Average_Marks(s2); // calling function 
		}
		else 
		{
			cout<<" INVALID DATA : ";
		}
		cout<<"Do want TO Calculate another student Marks : Y/N : ";
		cin>>sect;
		}while(sect=='y' || sect=='Y');
	
		if(sect=='n' || sect=='N')
		{
			cout<<"";
		}
		else
		{
			cout<<"";
		}
	}
	else if(select==3) // Change Marks
	{
		
		do{
		cout<<"\nPlease Enter The Student ID : ";
		cin>>select;
		if(select==1)
		{
			s1[4].change_Marks(s1); // calling function
		}
		else if(select==2)
		{
			s2[4].change_Marks(s2); // calling function
		}
		else if(select==3)
		{
			s3[4].change_Marks(s3); // calling function
		}
		else 
		{
			cout<<" INVALID DATA : ";
		}
		cout<<"Do want TO Change another student Marks : Y/N : ";
		cin>>sect;
		}while(sect=='y' || sect=='Y');
	
		if(sect=='n' || sect=='N')
		{
			cout<<"";
		}
		else
		{
			cout<<"";
		}	
	}
	else if(select>4)
	{
		cout<<"Please Try Again : \n";
	}
}while(select!=4);
	 if(select==4)
	{
		cout<<"_____________________________________________________________________________ \n";
		cout<<"\n********************** Thank You For using our Program ********************* \n";
		cout<<"_____________________________________________________________________________ \n";
	}
}
