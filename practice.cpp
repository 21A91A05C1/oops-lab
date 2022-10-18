#include<iostream>//wrong
using namespace std;
class Student{
	public:
		static int number;
		int a;
		void fun()
		{
			number=10;
			a=100;
		}
};
int Student::number=1000;
int main()
{
	Student obj1;
	obj1.fun();
	cout<<obj1.number<<" "<<obj1.a;
}
