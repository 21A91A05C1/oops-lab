//another way of accessing private variable outside the class using friend function
#include<iostream>
using namespace std;
class Class_stu{
	private:
		int a=20;
	protected:
		int b=10;
	public:
		friend void fun(Class_stu);//declaration of a function
		friend class B;
};
void fun(Class_stu obj)//friend function
{
	cout<<obj.a<<endl;
}
class B{//this is friend class
	public:
		void fun(Class_stu obj)
		{
			cout<<obj.a<<" "<<obj.b;
		}
};
int main()
{
	Class_stu obj;
	B obj1;
	fun(obj);
	obj1.fun(obj);
}
