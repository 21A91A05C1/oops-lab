#include<iostream>//copy constuctor
using namespace std;//to copy one obj valus to newly created object
class A{
	public:
		int a,b;
		A(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		A(A &obj)//can take any name
		{
			this->a=obj.a;
			this->b=obj.b;
		}
		void display()
		{
			cout<<this->a<<" "<<this->b<<endl;
		}
};
int main()
{
	A obj(1,2);
	A obj2(obj);
	obj.display();
	obj2.display();
}
