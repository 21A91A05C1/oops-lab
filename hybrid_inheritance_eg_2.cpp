	//DIAMOND PROBLEM AS HERE 'A' IS PRINTED FOR 2 TIMES 
#include<iostream>
using namespace std;
class A{//here 'A' is called as virtual base class
	public:
		A()
		{
			cout<<"A class"<<endl;
		}
};
class B:virtual public A{
	public:
		B()
		{
			cout<<"B class"<<endl;
		}
};
class D:virtual public A{
	public:
		D()
		{
			cout<<"D class"<<endl;
		}
	
};
class C:public B,public D{
	public:
		C()
		{
			cout<<"C class"<<endl;
		}
};

int main()
{
	C obj1;
}
/*
if we display anything form A class as it is called for 2 times that is the 
display method then we get ambiguity error which can be overcomed by using virtual as a keyword for class A
*/
