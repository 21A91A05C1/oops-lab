#include<iostream>
using namespace std;
class Add{
	private:
		int a=10;
		int b=20;
	public:
		friend void fun(Add);
};
void fun(Add obj)
{
	cout<<obj.a+obj.b;
}
int main()
{
	Add obj;
	fun(obj);
}
