#include<iostream>
using namespace std;
class Student {
	public://access specifier,keyword
		int rollno;
		float per;
		string name;
		string branch;
		/*void get_data(int roll,float p,string n,string b)
		{
			rollno=roll;
			per=p;
			name=n;
			branch=b;
		}
		void put_data()
		{
			cout<<rollno<<" "<<per<<" "<<" "<<name<<" "<<branch<<"\n";
		}*///we can create definition out of the class also like this
		void get_data(int,float,string,string);//called as fun prototype
		void put_data();
		
};
void Student::get_data(int roll,float p,string n,string b)//declaration out side the class
{
	rollno=roll;
	per=p;
	name=n;
	branch=b;
}
void Student::put_data() 
{

	cout<<rollno<<" "<<per<<" "<<" "<<name<<" "<<branch<<"\n";
}
int main()
{
	Student std1,std2;//object creation
	//cout<<std1.rollno;//gets accessed outside the class by using public
	int rollno;
	float per;
	string name;
	string branch;
	cin>>rollno;
	cin>>per;
	cin>>name;
	cin>>branch;
	std1.get_data(rollno,per,name,branch);//reading
	cin>>rollno;
	cin>>per;
	cin>>name;
	cin>>branch;
	std2.get_data(rollno,per,name,branch);
	std1.put_data();//printing
	std2.put_data();
	return 0;
}
