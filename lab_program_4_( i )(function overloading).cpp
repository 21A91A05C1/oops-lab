#include<iostream>
using namespace std;
class Add{
	public:
		void fun(int a,int b)
		{
			cout<<a+b<<endl;
		}
		void fun(int a,int b,int c)
		{
			cout<<a+b+c;
		}
};
int main()
{
	Add obj1;
	obj1.fun(1,2);
	obj1.fun(1,2,3);
}
