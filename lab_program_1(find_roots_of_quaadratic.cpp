#include<iostream>
#include<cmath>
using namespace std;
class Qua{
	public:
		int a,b,c,d;
		float r1,r2;
		Qua(int a,int b,int c)
		{
			this->a = a;
			this->b = b;
			this->c = c;
		}
		/*display()
		{
			cout<<this->a<<" "<<this->b<<" "<<this->c;
		}*/
		void discriminat()
		{
			this->d = (b*b)-(4*a*c);
		}
		/*display()
		{
			cout<<this->d;
		}*/
		void roots()
		{
			if(this->d>0)
			{
				this->r1 = (-b + sqrt(this->d))/(2*a);
				this->r2 = (-b - sqrt(this->d))/(2*a);
				cout<<"roots are equal and distinct"<<" "<<this->r1<<" "<<this->r2;
			}
			else if(this->d==0)
			{
				this->r1 = -b /(2*a);
				this->r2 = this->r1;
				cout<<"roots are equal and real"<<" "<<this->r1<<" "<<this->r2;
			}
			else
			{
				cout<<"imaginary roots";
			}
		}
};
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	Qua Q1(a,b,c);//object creation a parameterized constructor
	//Q1.display();
	Q1.discriminat();
	//Q1.display();
	Q1.roots();
}
