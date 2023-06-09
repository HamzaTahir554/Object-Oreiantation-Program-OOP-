#include<iostream>
#include<fstream>


using namespace std;

// Class
int count=0;
class product_details{
	
	//private data
	
	private:
		
		// class data memvbers
		
		string *name;
		
		int *price;
		
		int *selling;
		
		string *catagry;
		
		int size;
		
		int *quantity;
		
		int *totalAmount;
		
		int *profit;
		
		int total_profit;
		
		int sall = 0;
		
		int bill;
		// public data access by everone
		
	public:
		
		//constructer
		
		product_details()
		
		{
			
			size=0;
			
			name = new string[size];
			
			price = new int[size];
			
			catagry=new string[size];
			
			quantity = new int[size];
			
			totalAmount = new int[size];
			
			selling = new int[size];
				
			profit = new int[size];	
			
			
		}
		
		// Add Product Data
		
		void Add_Data(string p_name,int p_price, string p_catagry, int p_quantity, int totalamount , int p_selling, int p_profit)
		
		{
			
			string *new_name = new string[size+1];
			
			int *new_price = new int[size+1];
			
			string *new_catagry= new string[size+1];
			
			int *new_quantity = new int[size+1];
			
			int *new_amount = new int[size+1];
			
			int *new_selling = new int[size+1];
			
			int *new_profit = new int[size+1];
			
			for(int i = 0; i<size ;i++){
				
                new_name[i]  = name[i];
                
                new_price[i] = price[i];
                
                new_catagry[i]=catagry[i];
                
                new_quantity[i] = quantity[i];
                
                new_amount[i] = totalAmount[i];
                
                new_selling[i] = selling[i];
                
                new_profit[i] = profit[i];
            }

            new_name[size] = p_name;
            
            new_price[size] = p_price;
            
			new_catagry[size] = p_catagry;
			
			new_quantity[size] = p_quantity;
			
			new_amount[size] = totalamount;
			
			new_selling[size] = p_selling;
			
			new_profit[size] = p_profit; 
			
            size++;

            delete []name;
            
            delete []price;
            
			delete []catagry;
			
			delete []quantity;
			
			delete []totalAmount;
			
			delete []selling;
			
			delete []profit;
			
            name = new_name;
            
            price = new_price;
            
            catagry = new_catagry;
            
            quantity = new_quantity;
            
            totalAmount = new_amount;
            
            selling = new_selling;
            
            profit = new_profit;
		}
		
		// Display All product
		
		void Display()
		{
			cout<<"________________________________________________________________________________________________________________________________________________\n";
			
			cout<<"| ID\tName\t\tBuy\t\tSell\t\tCatagry\t\tQuantity\t\tInvestment\t\tProfit \n";
			
			for(int i=0; i<size; i++)                                               
			{
	
				cout<<"| "<<i+1<<"\t"<<name[i]<<"\t\t"<<price[i]<<" \t\t"<<selling[i]<<"\t\t"<<catagry[i]<<"\t\t"<<quantity[i]<<"\t\t\t"<<totalAmount[i]<<"\t\t\t"<<profit[i]<<"\n";
				
			}
			
			cout<<"|____________________________________________________________________________________________________________________________________________\n";
		}
		
		// serach for Catagry
		
		void display_catagry(string s_catagary)
		{
			
			for(int i=0; i<size; i++)
			{
				
				cout<<"___________________________________________________________________________________________________________________________________________\n";
			
				cout<<"| ID \tName \t\t Buy \t\t Sell \t\t Catagry \t\t Quantity \t\t Investment \t\t Profit \n";
				
				if(catagry[i]==s_catagary)
				{
					
						cout<<"| "<<i+1<<"\t"<<name[i]<<"\t\t"<<price[i]<<" \t\t"<<selling[i]<<"\t\t"<<catagry[i]<<"\t\t"<<quantity[i]<<"\t\t\t"<<totalAmount[i]<<"\t\t\t"<<profit[i]<<"\n";		
			
				}
				else if(catagry[i]!=s_catagary) 
				{
					
					
					continue;
					
				}	
				
				cout<<"________________________________________________________________________________________________________________________________________________\n";
				
			}	
				
		}
		
		// DELETE product
		
		void delete_product(int value)
		{
			
			size--;
			
			for(int i=value-1; i<size; i++)
			{
				
				this->name[i]=this->name[i+1];
				
				this->price[i]=this->price[i+1];
				
				this->quantity[i] = this->quantity[i+1];
				
				this->totalAmount[i] = this->totalAmount[i+1];
				
				this->catagry[i] = this->catagry[i+1];
				
			}
			
			cout<<"\nProduct Succesfully Deleted\n";
			
		}
		
		// Update Product Data
		
			// Updating Name
		
			void updating_name(string new_name,int ID)
			{
			
				this->name[ID-1]=new_name;
				
				cout<<"\nName Updated Successfully \n";
			
			}
		
			// Updating Price
			
			void Updating_price(int new_price,int ID)
			{
				
				this->price[ID-1]=new_price;
				
				this->totalAmount[ID-1]=this->quantity[ID-1] * this->price[ID-1];
				
				cout<<"\nPrice Updated Successfully \n";
				
			}
			
			// Updating Catagry
			
			void Updating_cat(string cat,int ID)
			{
				
				this->catagry[ID-1]=cat;
				
				cout<<"\nCatagry Updated Successfully \n";
				
			}
			
			void Updating_sell(int sell,int ID)
			{
				this->selling[ID-1]=sell;
				
				this->selling[ID-1] = this->selling[ID-1];
				
				this->profit[ID-1] = (this->selling[ID-1]) * this->quantity[ID-1];
				
				cout<<"\n Updated Successfully \n";
			}
			
			// Updatring Stock
			
			void Updating_Stock(int stock,int ID)
			{
				
				this->quantity[ID-1]=stock;	
				
				this->totalAmount[ID-1]=this->quantity[ID-1]*this->price[ID-1];
				
				cout<<"\nStock Updated Successfully \n";
				
			}
		
		/// SALES REPORT
		
		void sales_report()
		{
			int t_investment=0;
		
			for(int i=0; i<size; i++)
			{
				t_investment = t_investment + totalAmount[i];
				
			}
			cout<<"\n Investment : "<<t_investment;
			if(count>0)
			{
				cout<<"\n Sell : "<<this->sall;	
				cout<<"\n 10% Profit : "<<(this->sall/100)*10;
			}
			else
			{
				cout<<"\n No sale yet : ";
			}
		}		
		void Bell(int b)
		{
			this->bill=b;
		}
		// SELLS		
		
		void sell(int id,int quantity)
		{
			
			if(quantity>this->quantity[id-1] || quantity<1)
			{
				cout<<"\nStock limit reach out\n";
			}
			else 
			{
				int profit=0;
				this->quantity[id-1] = this->quantity[id-1] - quantity ;
				/*profit = (this->selling[id-1] * quantity);
				this->total_profit = this->total_profit - profit;*/
				this->sall =sall + (this->selling[id-1] * quantity);
				profit = this->selling[id-1] * quantity;
				int amount = price[id-1]*quantity;
				this->totalAmount[id-1] = this->totalAmount[id-1] - amount;
				cout<<"\nID  Product-Name     Quantity       price      Amount\n";
				cout<<id<<"\t"<<name[id-1]<<"\t"<< quantity<<"\t"<<this->selling[id-1]<<"\t"<<this->selling[id-1]*quantity<<endl;
				this->bill=this->bill+profit;
				cout<<"\nTotal Amount : "<<bill-40<<endl;
				count++;
			}
		}
		
	
		
		void Return(int id,int quantity)
		{
			if(count>0)
			{
				this->quantity[id-1] =this->quantity[id-1]+quantity;
				int amount = this->totalAmount[id-1] + (price[id-1]*quantity)  ;
				this->totalAmount[id-1] =  amount;
				int r_profit =  ((selling[id-1] - price[id-1])*quantity);
				this->profit[id-1]= profit[id-1] - r_profit;
			
			cout<<"\nProduct Return Succesfully\n";
			}
			else 
			{
				cout<<"\nNo Sells YET\n";
			}
		}
		
		void Damage(int id,int quantity)
		{
			this->quantity[id-1] =this->quantity[id-1] - quantity;
			this->totalAmount[id-1]= this->quantity[id-1] * this->price[id-1];
			this->profit[id-1]= (this->selling[id-1] - this->price[id-1]) * this->quantity[id-1]; 
			
		}
};

// main
int main()
{	

	// creating object of class
	
	product_details p;
	
	//Default username
	
	string u_name= "Admin";
	
	//Default password
	
	string u_pass= "Admin";
	
	// variable for admin user
	
	string user_name;
	
	// vaiable for admin password
	
	string password;
	
	// Counter
	
	int count=0;
	
	
	
	do{
		
		cout<<"\n\n                                              Username : ";
		fflush(stdin);
		
		// user input of user name
		
		getline(cin,user_name);
		
		cout<<"                                              Password : ";
		
		fflush(stdin);
		
		// user input of password;
		
		getline(cin,password);
	
		if(user_name==u_name && u_pass==password)
		{
			// welcome note
			
			cout<<" _______________________________________________________________________________________________________________\n";
			
			cout<<"| ____________________________________________________________________________________________________________ |\n";
			
			cout<<"||                                            WELLCOME                                                        ||\n";
			
			cout<<"||____________________________________________________________________________________________________________||\n";
		
			cout<<"|______________________________________________________________________________________________________________|\n\n";
			
		
		
			
			// variable to choose option in below menu
			
			int user_choice;	
			do{
					// MENU
				
					cout<<"\n\n _______________________________________________________________________________________________________________ \n";
				
					cout<<"|                                          PRESS 1 : ADD PRODUCT                                                |\n";
				
					cout<<"|                                          PRESS 2 : UPDATE PRODUCT                                             |\n";
					
					cout<<"|                                          PRESS 3 : DISPLAY CATAGRAY                                           |\n";
					
					cout<<"|                                          PRESS 4 : DISPLAY PRODUCTS                                           |\n";
					
					cout<<"|                                          PRESS 5 : REMOVE PRODUCT                                             |\n";
					
					cout<<"|                                          PRESS 6 : REPORTS                                                    |\n";
					
					cout<<"|                                          PRESS 7 : RECIPT                                                     |\n";
					
					cout<<"|                                          PRESS 8 : Damage/Return                                              |\n";
					
					cout<<"|                                          PRESS 9 : CHANGE PASSWORD                                            |\n";
					
					cout<<"|                                          PRESS 0 : LOG OUT                                                    |\n";
					
					cout<<"|_______________________________________________________________________________________________________________|\n\n";
				
				cout<<"Select Option : ";
				
				// user will select option from menu
				
				cin>>user_choice;
				
				// ADD product data
				
				if(user_choice==1)
				{
					
					// variables
					
					string name;
					
					int price;
					
					string catagry;
					
					char choice;
					
					int quantity;
					
					int totalAmount;
					
					int profit;
					
					int selling;
					
					do{
						cout<<"\n";
						cout<<"Enter Product Name : ";
						
						fflush(stdin);
						
						// user input of name 
						
						getline(cin,name);
						cout<<"\n";
						cout<<"Enter Buying Price of Product : ";
						
						//user input of price
						
						cin>>price;
						cout<<"\n";
						cout<<"Enter the Selling Price of Product : ";
						
						cin>>selling;
						cout<<"\n";
						cout<<"Enter Catagry of Product : ";
						
						fflush(stdin);
						
						//user input of Catagry
						
						getline(cin,catagry);
						cout<<"\n";
						//user input of quantity
						
						cout<<"Enter Stock of Product : ";
						
						cin>>quantity;
						cout<<"\n";
						// Calculate total Investment of single product
						
						totalAmount = quantity*price;
						
						// Calculate total profit of single product
						
						profit = (selling - price) * quantity;
						
						// sending data to class function
						
						p.Add_Data(name, price, catagry, quantity, totalAmount,selling,profit);
						
						count++;
						
						cout<<"Do you want to Add another Product : y|n : ";
						
						
						// user will choice is add another product
						
						cin>>choice;
						
					}while(choice=='y' || choice=='Y');
				}
				
				// Update Product Data
				
				else if(user_choice==2)
				{
					
					// variable for to asking Id of product
					
					int ID;
					
					//variable for to asking name of product
					
					string new_name;
					
					//variable for to asking catagary of product
					
					string new_cat;
					
					//variable for to asking Price of product
					
					int new_price;
					
					//variable for to asking quantity of product
					
					int stock;
					
					int new_sellprice;
					
					int choice5;
					
					if(count>0)
					{
						
						cout<<"Enter the ID OF product : ";
						
						cin>>ID;
						
						do{
							
							cout<<" _______________________________________________________________________________________________________________ \n";
							
							cout<<"|                                          PRESS 1 : TO CHANGE NAME                                             |\n";
							
							cout<<"|                                          PRESS 2 : TO CHANGE Buying PRICE                                     |\n";
							
							cout<<"|                                          PRESS 3 : TO CHANGE QUANITITY                                        |\n";
							
							cout<<"|                                          PRESS 4 : TO CHANGE CATAGARY                                         |\n";
							
							cout<<"|                                          Press 5 : To CHANGE Selling Price                                    |\n";
							
							cout<<"|                                          PRESS 0 : BACK                                                       |\n";
							
							cout<<"|_______________________________________________________________________________________________________________|\n";
							
							cout<<"Select Option : ";
							
							cin>>choice5;
							
							// To CHange name
							
							if(choice5==1)
							{
								
								cout<<"Enter New Name : ";
								
								fflush(stdin);
								
								getline(cin,new_name);
								
								p.updating_name(new_name,ID);
								
							}
							
							// To Change Price
							
							else if(choice5==2)
							{
								
								cout<<"Enter New Price : ";
								
								cin>>new_price;
								
								p.Updating_price(new_price,ID);
									
							}
							
							// to Update the stock
							
							else if(choice5==3)
							{
								
								cout<<"Enter New Stock : ";
								
								cin>>stock;
								
								p.Updating_Stock(stock,ID);	
								
							}
							
							// to change the catagary
							
							else if(choice5==4)
							{
								
								cout<<"Entr New Catagry : ";
								
								fflush(stdin);
								
								getline(cin,new_cat);
								
								p.Updating_cat(new_cat,ID);
								
							}
							
							else if(choice5==5)
							{
								cout<<"Enter New Selling Price of Product : ";
								
								cin>>new_sellprice;
								
								p.Updating_sell(new_sellprice,ID);
							}
							
							// Go back
							
							else if(choice5==0)
							{
								
								break;
								
							}
							
							// if user select invalid option
							
							else 
							{
								
								cout<<" \n Invalid Data : PLease Try Again !!\n";
							
							}
						
							
							
						}while(choice5!=0 );	
						
						
					}
					else 
					{
						
						cout<<"\nNo Item added yet!!\n";
						
					}
				}
				
				// Display catagary
				
				else if(user_choice==3)
				{
					
					// varaible for to ask from user to display another catafory
					
					char choice3;
					
					do{
						
						
							// variable  to search for catagry
						
							string s_catagry;
					
							if(count>0)
							{
								
								// massage to user to enter catagry name
						
								cout<<" Search Catagry : ";
						
								fflush(stdin);
						
								// user enter the catagry name
						
								getline(cin,s_catagry);
						
								// Sending value to  the class finction
						
								p.display_catagry(s_catagry);
								
							}
							else
							{
								
								// if admin not enter any data
								
								cout<<"\nNo Product Added Yet!!\n";
								
							}
							
						// massage for user to ask for another catagry to display 	
							
						cout<<"Do want to Dispaly another catagory : y/n : ";
						
						// here user will tell is he/she dislay another catagry yes or not
						
						cin>>choice3;	
						
					}while(choice3=='y' || choice3=='Y');
					
				}
				
				// Display All products
				
				else if(user_choice==4)
				{
					
					if(count>0)
					
					{
						
						// Display all products
						
						p.Display();
						
					}
					
					else
					
					{
						
						// if admin not enter any data
						
						cout<<"\nNo Product Added Yet!!\n";
						
					}
					
				}
				
				// Remove Products
				
				else if(user_choice==5)
				{
					
					// varaible for to ask from user to Remove Or delete another product
						
					char choice4;
						
					do{
					
					if(count>0)
					{
						
						// variable for delete product through ID 
						
						int id;
					
							
						// Displat all products to recognize the ID
						
						p.Display();
							
						//massage for user to ask for enter the id
							
						cout<<"Enter ID of Product : ";
							
						// here user will enter id of product which thay want to delete 
							
						cin>>id;
						
						char choice6;
						
						cout<<"Conform TO Deltet The Product : Y/N : ";
						
						cin>>choice6;
						
						if(choice6=='y' || choice6=='Y')
						{
							// massage for user to ask for another delete another product data
							
							p.delete_product(id);
						
							// count will decreament after deleting product
							
							count--;
							
						}
						else if(choice6=='n' || choice6=='N')
						{
							
							break;
							
						}
						else 
						{
							
							cout<<"\nInvalid Data : Please Try Again !!\n";
							
						}
			
					}
					else
					{
						
						// if admin not enter any data
						
						cout<<"\nNo Product Added Yet!!\n";
						
					}
				
						cout<<"Do want to Dispaly another catagory : y/n : ";
						
						// here user will tell is he/she to delete another product yes or no
						
						cin>>choice4;
								
					}while(choice4=='y' || choice4=='Y');
									
				}
				
				//Reports
				
				else if(user_choice==6)
				{
					
					if(count>0)
					{
						
						//Reports Code 
						
						p.sales_report();
						
					}
					else
					{
						
						// if admin not enter any data
						
						cout<<"\nNo Product Added Yet!!\n";
						
					}
				}
				
				//Recipts
				
				else if(user_choice==7)
				{
					if(count>0)
					{
						
						char select;
						p.Display();
						do{
							
							int iid;
							int Quantity;
							int sel;
							cout<<"enter the product id : ";
							cin>>iid;
							cout<<"enter the quantity : ";
							cin>>Quantity;
							// Printing recipt
							p.sell(iid,Quantity);
								
							
							cout<<"DO want to add another Product to cart : ";
							cin>>select;
							
						}while(select=='y' || select=='Y');
						p.Bell(0);
					}
					else
					{
						// if admin not enter any data
						
						cout<<"\nNo Product Added Yet!!\n";
					}
				}
				
				// Damage / Return Product
				
				else if(user_choice==8)
				{
					if(count>0)
					{
						int id;
						int quantity;
						int choice7;
						do{
							
							cout<<" _______________________________________________________________________________________________________________ \n";
							cout<<"|                                          PRESS 1 : Return Products                                            |\n";
							cout<<"|                                          PRESS 2 : Damage Products                                            |\n";
							cout<<"|                                          PRESS 0 : Back                                                       |\n";
							cout<<"|_______________________________________________________________________________________________________________|\n";
							
							cout<<"Select Option : ";
							cin>>choice7;
							if(choice7==1)
							{
								p.Display();
								cout<<"\n\nEnter ID of Return Product : ";
								cin>>id;
								
								cout<<"Enter Quantity Of Return Product : ";
								cin>>quantity;
								
								p.Return(id,quantity);
								
							}
							
							else if(choice7==2)
							{
								p.Display();
								cout<<"\n\nEnter ID of Damaged Product : ";
								cin>>id;
								
								cout<<"Enter Quantity Of Damaged Product : ";
								cin>>quantity;
								
								p.Damage(id,quantity);
								
							}
							else if(choice7==0)
							{
								break;
							}
							else
							{
								cout<<"Invalid Data : Please try again";
							}
						}while(choice7 != 0);
						
						
					}
					else 
					{
						
						cout<<"\nNo Product Added Yet!!\n";
					
					}
				}
				
				// Change Password
				
				else if(user_choice==9)
				{
					string NEW_Pass;
					string old_pass;
					string conform_pass;
					cout<<"\nEnter Old Password : ";
					cin>>old_pass;
					if(old_pass==u_pass)
					{
						cout<<"Enter New Password : ";
						cin>>NEW_Pass;
						cout<<"Conform Password :  ";
						cin>>conform_pass;
						if(conform_pass!=NEW_Pass)
						{
							cout<<"\nPassword Not matched";
						}
						else
						{
							cout<<"\nPassword CHanged Successfully.";
						}
					}
					else
					{
						cout<<"\nIncorrect Password!!\n";
					}
				}
				else if(user_choice==0)
				{
					
					// LOG OUT
					
					break;
					
				}
				else 
				{
					
					cout<<"\nInvlaid Option : Please Try again !!\n";
					
				}
				
			}while(user_choice!=0);
		}
		else 
		{
			
			cout<<"\nPlease Try Again !! \n";
					
		}
	}while(user_name!=u_name && u_pass!=password);
	
		
		cout<<"\n\n _______________________________________________________________________________________________________________\n";
	
		cout<<"| ____________________________________________________________________________________________________________ |\n";
	
		cout<<"||                                 THANK YOU FOR USING OUR PROGRAM                                            ||\n";
		
		cout<<"||____________________________________________________________________________________________________________||\n";
		
		cout<<"|______________________________________________________________________________________________________________|\n";
	
}