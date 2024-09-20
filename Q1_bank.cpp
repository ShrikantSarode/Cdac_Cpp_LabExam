//1 Banking Record System.
//File handling has been effectively used for each feature of this project
//Operations ? Add Record: ? Show/List Data: ? Search Record: ? Edit Record: ? Delete Record:
#include<iostream>
#include<fstream>
using namespace std;
class bank{
	private:
		string name,gen;
		int age;
	public:
		void add()
		{
			cout<<"\nEnter Name:";
			cout<<"\nEnter Age:";
			cout<<"\nEnter Gender:";
			cin>>name>>age>>gen;
			cout<<"\nAdded Successfully!!"<<endl;
			ofstream file("Bank.txt");
			file<<"\nName: "<<name<<"\nAge: "<<age<<"\nGender: "<<gen;
			
			show();
			file<<"File is created!!";
		}
		void show()
		{
			cout<<"\nName: "<<name;
			cout<<"\nAge: "<<age;
			cout<<"\nGender: "<<gen;
		}
		void delete_Rec()
		{
			cout<<"\nRecord deleted.";
		}
};
main()
{
	bank b;
	

		int ch;
	cout<<"\n1.Add Record";
	cout<<"\n2.Show Record";
	cout<<"\n3.Delete Record";
	cout<<"\n4.Exit"<<endl;
	cin>>ch;

	
	
		
		switch(ch)
	{
		case 1: b.add();
		break;
		
		case 2: b.show();
		break;
		
		case 3: b.delete_Rec();
		break;
		
		case 0: "Exit";
		break;
		
		default:"Invaild choice";
	}
	
}