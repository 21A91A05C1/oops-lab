/*#include<iostream>
using namespace std;//using public methods
class A{
	public:
		void create()
		{
			B obj2(1,2);
			obj2.display();
		}
		private:
		class B{
			public:
				int a,b;
				B(int a,int b)
				{
					this->a=a;
					this->b=b;
				}
				void display()
				{
					cout<<this->a<<" "<<this->b;
				}
		};
};
int main()
{
	A obj;
	obj.create();
}*/

//wrong
#include<iostream>
using namespace std;//using public methods
class A{
	public:
		friend class C;
		private:
		class B{
			public:
				int a,b;
				B(int a,int b)
				{
					this->a=a;
					this->b=b;
				}
				void display()
				{
					cout<<this->a<<" "<<this->b;
				}
		};
};
class C{
	public:
		C()
		{
		A::B obj(1,2);
		obj.display();
	}
};
int main()
{
	A::B obj;
	obj.display(); 
}
