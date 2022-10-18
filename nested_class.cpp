#include<iostream>
using namespace std;
class A{
	public:
		int a=10,b=20;
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
	A::B obj(1,2);
	obj.display();
}
/*#include<iostream>
using namespace std;
class A{
	public:
		int a=10,b=20;
		class B{
			public:
				int a=40,b=60;
				class C{
					public:
						int a,b;
						C(int a,int b)
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
};
int main()
{
	A::B::C obj(1,2);
	obj.display();
}*/
