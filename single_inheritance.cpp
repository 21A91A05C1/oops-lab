#include<iostream>
using namespace std;
class Personal{
	public:
		string name,phno;
		Personal(string n,string pno)
		{
			name=n;
			phno=pno;
		}
		void display()
		{
			cout<<phno<<" "<<name<<" "<<endl;
		}
};
class Student:public Personal{
	public:
		string rollno,branch;
		static string college;
		Student(string n,string pno,string roll,string b):Personal(n,pno)
		{
			rollno=roll;
			branch=b;
		}
		void display()
		{
			cout<<rollno<<" "<<branch<<" "<<college<<endl;
			Personal::display();
		}
};
string Student::college="Aditya";
int main()
{
	Student std1("sowmya","7981655042","5C1","cse");
	std1.display();
}






