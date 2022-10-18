#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int marks;
		Student(string name="VVVVV",int marks=0)
		{
			this->name=name;
			this->marks=marks;
		}
		void display()
		{
			cout<<name<<" "<<marks<<endl;
		}
		
};
int main()
{
	Student s1("Sowmya",35);
	s1.display();
	Student s2;
	s2.display();
}
