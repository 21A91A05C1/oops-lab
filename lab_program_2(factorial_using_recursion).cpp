#include<iostream>
using namespace std;
class Factorial{
	public:
		int a;
		Factorial(int a)
		{
			this->a=a;
		}
		/*display()
		{
			cout<<a;
		}*/
		int res(int a)
		{
			if(a==1)
			{
				return 1;
			}
			return a*res(a-1);
		}
};
int main()
{
	int a;
	cin>>a;
	Factorial fac(a);
	//fac.display();
	cout<<fac.res(a);
	
}
