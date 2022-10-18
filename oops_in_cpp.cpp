#include<iostream>
using namespace std;
class Student
{
	public://accessspecifier
		int rollno;
		float per;
		string name;
		string branch;
		//if we want to write  a function outside the class
		void get_data(int,int,string,string);//function prototypes
		void put_data();
};
void Student::get_data(int roll,int p,string n,string b)
		{
			rollno=roll;
			per=p;
			name=n;
			branch=b; 
		}
void Student::put_data()
		{
			cout<<rollno<<" "<<per<<" "<<name<<" "<<" "<<branch;
		}
int main()
{
	Student std1,std2;//declartionof object
	int rollno;
	float per;
	string name;
	string branch;
	cin>>rollno;
	cin>>per;
	cin>>name;
	cin>>branch;
	std1.get_data(rollno,per,name,branch);
	cin>>rollno;
	cin>>per;
	cin>>name;
	cin>>branch;
	std2.get_data(rollno,per,name,branch);
	std1.put_data();
	std1.put_data();
	//cout<<std1.rollno;
	return 0;
}
