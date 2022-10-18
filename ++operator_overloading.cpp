//overload for increment operator
//post increment operator
/*#include<iostream>
using namespace std;
class Time{
	public:
		int hour,min;
		Time()
		{
			hour=0;//not required
			min=0;//not required
		}
		Time(int hh,int mm)//parameterized constructor
		{
			hour=hh;
			min=mm;
		}
		void operator ++(int)
		{
			hour++;
			min++;
		}
};
int main()
{
	Time t1(7,50);
	Time t2(8,80);
	t1++;
	t2++;
	cout<<t1.hour<<" "<<t1.min<<endl;
	cout<<t2.hour<<" "<<t2.min<<endl;
}*/
//pre increment operator
#include<iostream>
using namespace std;
class Time{
	public:
		int hour,min;
		Time()
		{
			hour=0;//not required
			min=0;//not required
		}
		Time(int hh,int mm)//parameterized constructor
		{
			hour=hh;
			min=mm;
		}
		void operator ++()
		{
			hour++;
			min++;
		}
};
int main()
{
	Time t1(7,50);
	Time t2(8,80);
	++t1;
	++t2;
	cout<<t1.hour<<" "<<t1.min<<endl;
	cout<<t2.hour<<" "<<t2.min<<endl;
}
