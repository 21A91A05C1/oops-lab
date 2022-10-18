#include<iostream>
using namespace std;
class Base{
	public:
		string name,phone;
		Base(string n,string p)
		{
			name=n;
			phone=p;
		}
		void display()
		{
			cout<<name<<" "<<phone<<endl;
		}
};
class Employee:public Base{
	public:
		string id,salary;
		Employee(string i,string sal,string n,string p):Base(n,p)
		{
			id=i;
			salary=sal;
		}	
		void display()
		{
			cout<<id<<" "<<salary<<endl;
			Base::display();
		}
};
class Student:public Base{
	public:
		string branch,rollno;
		Student(string b,string rol,string name,string phone):Base(name,phone)
		{
			branch=b;
			rollno=rol;
		}	
		void display()
		{
			cout<<branch<<" "<<rollno<<endl;
			Base::display();
		}
};
int main()
{
	Student std1("Sowmya","7981655042","5455","1000000");
	std1.display();
	Employee emp1("Sudhir","454","5455","1000000");
	emp1.display();
}
