#include<iostream>
using namespace std;
class Student{
	public:
		string rollno,branch;
		Student(string roll,string b)
		{
			rollno=roll;
			branch=b;
		}
		void display()
		{
			cout<<"hello";
		}
};
class Sportsperson{
	public:
		string game;
		int medalcount;
		Sportsperson(string g,int c)
		{
			game=g;
			medalcount=c;
		}
		void display()
		{
			cout<<"hi";
		}
};
class Person:public Sportsperson,public Student{
	public:
		string name;
		Person(string n,string g,int c,string roll,string b):
			Sportsperson(g,c),Student(roll,b)
		{
			name=n;
		}
		
};
int main()
{
	Person p1("sowmya","coco",0,"5c1","cse");
	p1.display()//this is an ambiguity error to avoid this we do the following
	p1.Sportsperson::display();
	p1.Student::display();
}

