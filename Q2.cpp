//2.
//Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
//Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
//Default values for Pay_Rate Rs. 500 per hours)
#include<iostream>
using namespace std;

	string name;
	int pay_rate=500;
	float time,sal,net=0;
	
void salary()
	{
		net=sal+pay_rate*time;
		cout<<"\nNet Salary : "<<net;
	}	
void display()
{
	cout<<"\nName: "<<name<<"\nWorking Time: "<<time<<"\nSalary: "<<sal;
}
	
main()
{
	cout<<"\nEnter name: ";
	cout<<"\nWorking Time: ";
	cout<<"\nSalary: ";
	cin>>name>>time>>sal;
	
	display();
	salary();
	
}