#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <time.h>
#include <cstdio>
#include <sstream>
using namespace std;
class customer
{
	public:
	char nameofcustomer[15];
	int accnumber;
	int balance;
	char psswd[10];
	
	void create()
	{
		
		cout<<"enter the name";
		cin.ignore();
		cin.getline(nameofcustomer,14);
		
		cout<<" \n the account number generated is : ";
		srand(time(0));
		accnumber=rand();
		cout<<accnumber<<endl;

		cout<<"enter the amount ";
		cin>>balance;
		
		if(balance<1000)
		{
			cout<<"\nthe amount must be greater than 1000";
			return;
		}
		cout<<"make a password";
		cin.ignore();
		cin.getline(psswd,10);
		
		return ;
	}
	
	void balancenq()
	{
		
		cout<<nameofcustomer<<" "<<accnumber<<" "<<balance<<"********";
		return;

	}	
	
	
	
	void withdraw (int k)
	{
		balance=balance-k;
		cout<<nameofcustomer<<" "<<accnumber<<"  the new balance is : "<<balance<<"********";
		return;
	}
	
	
	
};
	
	
int main()
{
	customer c1;
	int i,j;
	
	cout<<"\n					BANKING SYSTEM					"<<endl;
	cout<<"*************************************************************************************************"<<endl;
	cout<<"\nplz select your option"<<endl;
	cout<<"\n	1		for opening a new account"<<endl;
	cout<<"\n	2		for balance enquiry"<<endl;
	cout<<"\n	3		for deposits"<<endl;
	cout<<"\n	4		for withdrawl"<<endl;
	cout<<"\n	5		for modifying account details"<<endl;
	cout<<"\n	6		for closing your account"<<endl;
	cout<<"\n	7		for list of account holders(Admin only) "<<endl;
	cout<<"\n	8		for exit"<<endl;
	
	cin>>j;

	switch (j)
	{
	case 1 :
		{
			c1.create();
			fstream fout("datum.txt",ios::out|ios::in|ios::app|ios::binary);
			fout.write((char *)&c1,sizeof(c1));
			fout.close();
			break;
		}
	case 2 : 
		{	
			int z;
			int flag=0;
			char str[10];
			cout<<"\n enter the account number : ";
			cin>>z;
			cout<<"\n enter the password";
			cin.ignore();
			cin.getline(str,10);
			fstream fin("datum.txt",ios::in);
		
			if(fin)
			{
				while(!fin.eof())
				{	
					fin.read((char *)&c1,sizeof(c1));
					if(z==c1.accnumber)
					{
						if(strcmp(str,c1.psswd)==0)
						{
							flag=1;
							c1.balancenq();
							break;
						}
						else
							cout<<"\n wrong password";
		 			}
				
				}
				
				if(flag==0)
				cout<<"\n account number not found";	
			 }
			
			fin.close();
			break;
		}

	case 3 :
		{
			customer c2;
			int z,k;
			int flag=0;
			char str[10];
			cout<<"\n enter the account number : ";
			cin>>z;
			cout<<"\n enter the password";
			cin.ignore();
			cin.getline(str,10);
			fstream fin("datum.txt",ios::in|ios::out|ios::ate);
			
			if(fin)
			{
				while(!fin.eof())
				{	
					fin.seekg(0);
					fin.read((char *)&c1,sizeof(c1));
					if(z==c1.accnumber)
					{
						if(strcmp(str,c1.psswd)==0)
						{
							flag=1;
							cout<<"\n enter the amount you want to deposit";
							cin>>k;
							strcpy(c2.nameofcustomer,c1.nameofcustomer);
							c2.balance=c1.balance+k;
							c2.accnumber=c1.accnumber;
							strcpy(c2.psswd,c1.psswd);
							fin.seekp(-1*(sizeof(c1)),ios::cur);
							fin.write((char *)&c2,sizeof(c2));
							fin.close();
							c2.balancenq();
							break;
							
						}
						else
							cout<<"\n wrong password";
		 			}
				
				}
				
				if(flag==0)
				cout<<"\n account number not found";	
			 }
			
			fin.close();
			break;

		}


	case 4 :
		{
			customer c2;
			int z,q,k;
			int flag=0;
			char str[10];
			cout<<"\n enter the account number : ";
			cin>>z;
			cout<<"\n enter the password";
			cin.ignore();
			cin.getline(str,10);
			fstream fin("datum.txt");
		
			if(fin)
			{
				while(!fin.eof())
				{	
					fin.read((char *)&c1,sizeof(c1));
					if(z==c1.accnumber)
					{
						if(strcmp(str,c1.psswd)==0)
						{
							flag=1;
							cout<<"\n enter the amount you want to withdraw";
							cin>>k;
							strcpy(c2.nameofcustomer,c1.nameofcustomer);
							c2.balance=c1.balance-k;
							c2.accnumber=c1.accnumber;
							strcpy(c2.psswd,c1.psswd);
							fin.seekp(-1*(sizeof(c1)),ios::cur);
							fin.write((char *)&c2,sizeof(c2));
							fin.close();
							c2.balancenq();
							break;
						}
						else
							cout<<"\n wrong password";
		 			}
				
				}
				
				if(flag==0)
				cout<<"\n account number not found";	
			 }
			
			fin.close();
			break;

		}

	case 5 :
		{
			customer c3;
			int z;
			char ch,ch2;
			int flag=0;
			char str[10];
			cout<<"\n enter the account number : ";
			cin>>z;
			cout<<"\n enter the password";
			cin.ignore();
			cin.getline(str,10);
			fstream fin("datum.txt");
		
			if(fin)
			{
				while(!fin.eof())
				{	
					fin.read((char *)&c1,sizeof(c1));
					if(z==c1.accnumber)
					{
						if(strcmp(str,c1.psswd)==0)
						{
							flag=1;
							cout<<"\n do you wish to modify name y/n";
							cin>>ch;
							if(ch=='y')
							{
								cout<<"enter the name ";
								cin.ignore();
								cin.getline(c3.nameofcustomer,14);
							}
		
							cout<<"\n do you wish to modify password y/n";
							cin>>ch2;
							if(ch2=='y')
							{
								cout<<"enter the password";
								cin.ignore();
								cin.getline(c3.psswd,10);
							}
					
							c3.balance=c1.balance;
							c3.accnumber=c1.accnumber;
							fin.seekp(-1*(sizeof(c1)),ios::cur);
							fin.write((char *)&c3,sizeof(c3));

							cout<<"		new name :	"<<c3.nameofcustomer<<" "<<c3.accnumber<<" "<<c3.balance<<"	new password	:"<<c3.psswd<<"********";
							
							break;
						}
						else
						cout<<"\n wrong password";
		 			}
				
				}
				
				if(flag==0)
				cout<<"\n account number not found";	
			 }
			
			fin.close();
			break;
		
		}
	case 6:
		{
			customer c1;
			int z;
			int flag=0;
			char str[10];
			cout<<"\n enter the account number : ";
			cin>>z;
			fstream fin("datum.txt");
			ofstream fout("temp.txt");
			if(fin)
			{
				while(!fin.eof())
				{	
					fin.read((char *)&c1,sizeof(c1));
					if(z!=c1.accnumber)
					{
						if(fout)
						{
							cout<<"\n*************";
							fout.write((char *)&c1,sizeof(c1));
						}	
					}
				}		
			//cout<<"\n account deleted"<<endl;
			}
			fin.close();
			fout.close();
			//remove("datum.txt");
			//rename("temp.txt","datum.txt");
			break;
		}

	case 7:
		{
			char adminpsswd[]="admin";
			char str[10];
			cout<<"\n enter admin password for access";
			cin.ignore();
			cin.getline(str,10);
			if(strcmp(str,adminpsswd)==0)
			{
				fstream fin("datum.txt");
		
				if(fin)
				{
					while(!fin.eof())
					{	
						fin.read((char *)&c1,sizeof(c1));
					
						cout<<c1.nameofcustomer<<" "<<c1.accnumber<<" "<<c1.balance<<endl;		
					}
				
					fin.close();
					break;

				}
			}
		}

	case 8:
		{
			exit(0);

		}


	
}

}