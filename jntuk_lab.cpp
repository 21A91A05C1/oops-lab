#include<iostream>
using namespace std;
class Distance{
	public:
		int feet,inches;
		Distance()//constructor overloading
		{
			this->feet=0;
			this->inches=0;
		}
		Distance(int feet,int inches)
		{
			this->feet = feet;
			this->inches = inches;
		}
		void display_dist()
		{
			cout<<this->feet<<" "<<this->inches<<endl;
		}
		~Distance(){
		}
		
};
int main()
{
	int feet,inches;
	cin>>feet>>inches;
	Distance d1(feet,inches);
	cin>>feet>>inches;
	Distance d2(feet,inches);
	Distance res;
	res.feet=d1.feet+d2.feet;
	res.inches=d1.inches+d2.inches;//7+6
	if(res.inches>=12)//13  
	{
		res.feet=res.feet+(res.inches/12);
		res.inches= res.inches%12;
	}
	res.display_dist();
}
