//encapsulation
#include<iostream>
using namespace std;
class Class_student{
	private://private instance(chnge from oject to object) method
		int a=10;//encapsulation
		int b;
		void fun()
		{
			cout<<"Hai";
		}
	public://public instance (change from object to object;
		void fun1()
		{
			cout<<a;
			fun();
		}
};
int main()
{
	Class_student obj;
	obj.fun1();
}
