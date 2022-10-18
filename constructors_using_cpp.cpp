#include<iostream>
using namespace std;
class Student{
	public:
		int rollno;
		float per;
		string name;
		string branch;
		Student(int r,float p,string n,string b)
		{
			rollno=r;
			per=p;
			name=n;
			branch=b;
		}
		void put_data();
		
};
void Student::put_data()
{
	cout<<rollno<<" "<<per<<" "<<name<<" "<<branch;
}
int main()
{
	int rollno;
	float per;
	string name;
	string branch;
	cin>>rollno;
	cin>>per;
	cin>>name;
	cin>>branch;
	Student std1(rollno,per,name,branch);
	cin>>rollno;
	cin>>per;
	cin>>name;
	cin>>branch;
	Student std2(rollno,per,name,branch);
	std1.put_data();
	std2.put_data();
	return 0;
}
