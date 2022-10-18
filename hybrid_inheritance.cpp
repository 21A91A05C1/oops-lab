#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"A class"<<endl;
		}
};
class B:public A{
	public:
		B()
		{
			cout<<"B class"<<endl;
		}
};
class C:public B{
	public:
		C()
		{
			cout<<"C class"<<endl;
		}
	
};
class D:public A{
	public:
		D()
		{
			cout<<"D class"<<endl;
		}
	
};
class E:public D{
	public:
		E()
		{
			cout<<"E class"<<endl;
		}
	
};
int main()
{
	C obj1;
	E obj2;
}

