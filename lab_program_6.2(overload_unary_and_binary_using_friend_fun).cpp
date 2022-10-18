//incomplete
#include<iostream>
using namespace std;
class Time{
	int hh,min;
	public:
		Time(int h,int m)
		{
			hh=h;
			min=m;
		}
		void display()
		{
			cout<<hh<<":"<<min<<endl;
		}
		friend void operator++(Time &obj);
		friend Time operator+(Time &obj1,Time &obj2);
};
void operator++(Time &obj)
{
	obj.hh++;
	obj.min++;
}
Time operator+(Time &obj1,Time &obj2)
{
	int m,h=0;
	m=obj1.min+obj2.min;
	if(m>=60)
	{
		h+=m/60;
		m=m%60;
	}
	h+=obj1.hh+obj2.hh;
	obj1.hh=h;
	obj1.min=m;
	return obj1;
}
int main()
{
	Time t1(2,30);
	Time t2(2,45);
	t1.display();
	++t1;
	t1.display();
	t1=t1+t2;
	t1.display();
}
