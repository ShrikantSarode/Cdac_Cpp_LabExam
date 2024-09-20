//3
//Write a program create employee class with members variable as EmpId,Name of Employee and Salary. For 10 Employees
//Print list of all employees.
//Print list of employee who got heights salary.
#include<iostream>
using namespace std;
class employee{
	private:
		int empId,sal,max=0;
		string name;
	public:
		void set(int Id,int s,string n)
		{
			empId=Id;
			sal=s;
			name=n;
		}
		void info()
		{
			cout<<"\nid: "<<empId<<"\nSal: "<<sal<<"\nName: "<<name;
			cout<<"\nid: "<<empId<<"\nSal: "<<sal<<"\nName: "<<name;
			cout<<"\nid: "<<empId<<"\nSal: "<<sal<<"\nName: "<<name;
			cout<<"\nid: "<<empId<<"\nSal: "<<sal<<"\nName: "<<name;
			cout<<"\nid: "<<empId<<"\nSal: "<<sal<<"\nName: "<<name;
			cout<<"\nid: "<<empId<<"\nSal: "<<sal<<"\nName: "<<name;
			cout<<"\nid: "<<empId<<"\nSal: "<<sal<<"\nName: "<<name;
			cout<<"\nid: "<<empId<<"\nSal: "<<sal<<"\nName: "<<name;
			cout<<"\nid: "<<empId<<"\nSal: "<<sal<<"\nName: "<<name;
			cout<<"\nid: "<<empId<<"\nSal: "<<sal<<"\nName: "<<name;
		}
		void highest()
		{
			
			for(int i=1;i<=10;i++)
			{
				if(max>sal)
				{
					max+=sal;
				}
			}
			cout<<"\nHighest sal:"<<max;
		}
};
main()
{
	employee e,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10;
	int Id,s;
	string n;
	
	e1.set(1,20000,"John");
	e2.set(2,220000,"A");
	e3.set(3,20000,"B");
	e4.set(4,20000,"C");
	e5.set(5,20000,"D");
	e6.set(6,2548,"E");
	e7.set(1,50000,"F");
	e.info();
	e.highest();
	
}