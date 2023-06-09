#include<iostream>
#include<fstream>
using namespace std;

class store{
	private:
		int ID;
		string name;
		int quantity;
		int price;
	public:
		store()
		{
			this->ID=0;
			this->name="name";
			this->quantity=0;
			this->price=0;
		}
		
		// Constructur
		store(int ID,string name,int quantity, int price )
		{
			this->ID=ID;
			this->name=name;
			this->quantity=quantity;
			this->price=price;
		}
		
		
		
		~store()
		{
			cout<<"\nThank You For using Our Program !! \n";
		}
		
		// Display
		void display()
		{
			cout<<"Item Data \n\n";
			cout<<"ID : "<<ID<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Quantity : "<<quantity<<endl;
			cout<<"Price : "<<price<<endl<<endl;
		}
		
		// SETTERS
		void setname(string name)
		{
			this->name=name;
		}
		void setID(int ID)
		{
			this->ID=ID;
		}
		void setquantity(int quantity)
		{
			this->quantity=quantity;
		}
		void setprice(int price)
		{
			this->price=price;
		}
		
		// GETTERS
		
		string getname()
		{
			return name;
		}
		int getID()
		{
			return ID;
		}
		int getquantity()
		{
			return quantity;
		}
		int getprice()
		{
			return price;
		}	
};


int main()
{
	int items;
	int i;
	
	cout<<"Enter Total Number of Items : ";
	cin>>items;
	
	int price[items];
	int quantity[items];
	string name[items];
	store s1[items];      // Object
	for(int i=0; i<items; i++)
	{
		cout<<"Enter Item Name : ";
		cin>>name[i];
		cout<<"Enter Price : ";
		cin>>price[i];
		cout<<"Enter Quantity : ";
		cin>>quantity[i];
		cout<<"\n\n";
		
	}
	
	int select;
	
		
	do{
		cout<<"_______________________________\n";
		cout<<"|Menu :                         |\n";
		cout<<"|Press 1 : Display Item.        |\n";
		cout<<"|Press 2 : Update Item Detail.  |\n";
		cout<<"|Press 3 : Search Item by ID\n  |";
		cout<<"|Press 0 : Exict.               |\n";
		cout<<" ________________________________\n";
		cout<<"\n\n"<<"Select option : ";
		cin>>select;
		if(select==1)
		{
			for(int i=0; i<items; i++)
			{
			s1[i] = {i , name[i], quantity[i], price[i]};
			s1[i].display();
			}
		}
		else if(select==2)
		{
			
			int select2;
			int Id;
	        
			cout<<"Enter Product ID : ";
			cin>>Id;
			cout<<"Menu : \n";
			cout<<"\nPress 1 : To change Item Name. \n";
			cout<<"Press 2 : To change Item Price. \n";
			cout<<"Press 3 : To change Item Quantity.\n";
			cout<<"Press 0 : Back.\n";
			cout<<"Select Option : ";
			cin>>select2;
			cout<<"\n";
			
			
			if(select2==1)
			{
				
				string newname[Id];
				cout<<"Enter New Item name : ";
				cin>>newname[Id];
				s1[Id].setname(newname[Id]);
			}
			else if(select2==2)
			{
				int newprice[Id];
				cout<<"Enter New Price : ";
				cin>>newprice[Id];
				s1[Id].setprice(newprice[Id]);
			}
			else if(select2==3)
			{
				int newqt[Id];
				cout<<"Enter New Price : ";
				cin>>newqt[Id];
				s1[Id].setquantity(newqt[Id]);
			}
		
			
		}
		else if(select==3)
		{
			int id;
			cout<<"Enter ID : ";
			cin>>id;
			s1[id] = {id , name[id], quantity[id], price[id]};
			s1[id].display();
		}
	}while(select!=0);
	if(select==0)
	{
		cout<<" ";
	}
	
}
