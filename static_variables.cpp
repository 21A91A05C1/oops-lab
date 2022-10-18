#include<iostream>
using namespace std;
class Class_stu{
	public:
		static int college;
		int a=2;
		void fun()
		{
			college=10;
			a=100;
		}
};
int Class_stu::college=1;
int main()
{
	Class_stu obj1;
	Class_stu obj2;
	obj1.fun();
	cout<<obj1.college<<" "<<obj1.a<<endl;
	cout<<obj2.college<<" "<<obj2.a;
}
