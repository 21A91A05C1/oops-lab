//accesiing private variables using public methods
//satic method down
#include<iostream>
using namespace std;
class Class_stu{
	private:
		int a=20;
	protected:
		int b=10;
	public:
		int fun()
		{
			return b;
		} w
};
int main()
{
	Class_stu obj1;
	Class_stu obj2;
	cout<<obj1.fun();
	
	
}
//static in public
/*#include<iostream>
using namespace std;
class Class_stu{
	public:
		static int college;
		int a=2;
		static void fun1()//static method
		{
			//a=200;// invalid use of member 'Class_stu::a' in static member function
			college=300;
		}
};
int Class_stu::college=1;
int main()
{
	Class_stu obj1;
	Class_stu obj2;
	obj1.fun1();
	cout<<obj1.college<<" "<<endl;
	cout<<obj2.college;
	
}*/
