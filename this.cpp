#include<iostream>
using namespace std;
class A{
	public:
		int a,b;
		A(int a,int b)
		{
			this->a=a;//this represents the object(obj)
			this->b=b;
		}
		void display()
		{
			cout<<a<<" "<<b;//same ans
			cout<<this->a<<" "<<this->b;//same ans
		}
};
int main()
{
	A obj(10,20);
	obj.display();
}
