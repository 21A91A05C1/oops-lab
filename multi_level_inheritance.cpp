#include<iostream>
using namespace std;
class Landline{
	public:
		Landline()
		{
			cout<<"calls";
		}
};
class Mobile:public Landline
{
	public:
		Mobile()
		{
			cout<<"messages,music,calculator";
		}	
};
class Smartmobile:public Mobile{
	public:
		Smartmobile()
		{
			cout<<"videocalls,social media";
		}
};
int main()
{
	Smartmobile sm1;
}
