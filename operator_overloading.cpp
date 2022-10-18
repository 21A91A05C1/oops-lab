//(+)operator
//adding two objects and add it to another object
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
		Time operator +(Time &T)
		{
			Time t3;
			t3.hour=this->hour+T.hour;
			t3.min=this->min+T.min;
			while(t3.min>60)
			{
				t3.hour+=1;
				t3.min-=60;
			}
			return t3;
		}
};
int main()
{
	Time t1(7,50);
	Time t2(8,80);
	Time t3=t1+t2;//its a operator overloading function//t1.plus(t2) ....
	cout<<t3.hour<<" : "<<t3.min<<endl;
	//cout<<t1.hour<<" "<<t1.min<<endl;
	//cout<<t2.hour<<" "<<t2.min<<endl;
}
