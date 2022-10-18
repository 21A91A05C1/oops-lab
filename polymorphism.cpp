#include<iostream>
using namespace std;
class Class_student{
	public://
		
		void fun(int a,int b)
		{
			cout<<"Hai"<<" ";
		}
		void fun(double a)
		{
			cout<<"bye";
		}
};
int main()
{
	Class_student obj;
	obj.fun(1,2);
	obj.fun(1.1);
}
