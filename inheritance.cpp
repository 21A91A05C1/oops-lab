#include<iostream>
using namespace std;
class Personal{
	public://or protected
		string name,phno;
		Personal()
		{
			//cout<<"Personal Class"<<endl;
		}
};
class Student:public Personal{
	public:
		string roll,branch;
		Student(string n,string p,string r,string b)
		{
			//cout<<"Student class"<<endl;
			roll=r;
			branch=b;
			name=n;
			phno=p;
		}
		void display()
		{
			cout<<branch<<" "<<roll<<" "<<name<<" "<<phno<<endl;
		}
		
};

int main()
{
	//Student s1;//here we created student constructor but parent class also gets executed;
	Student s1("Sowmya","7981655042","21A91A05C1","CSE");
	s1.display();
	//cout<<s1.branch<<" "<<s1.roll<<" "<<s1.name<<" "<<s1.phno<<endl;
}
