#include<iostream>
using namespace std;
class Bankaccount{
	int pin;
	public:
		string name,ifsc,branch,bankname;
		long long accno,cardno,balance;
		Bankaccount(string name,string ifsc,string branch,string bankname,int accno,int cardno,int pin ,int balance)
		{
			this->name=name;
			this->ifsc=ifsc;
			this->branch=branch;
			this->bankname=bankname;
			this->accno=accno;
			this->cardno=cardno;
			this->pin=pin;
			this->balance=balance;
		}
		int getpin()
		{
			return this->pin;
		}
		void displayamount()
		{
			cout<<balance;
		}
		void viewdetails()
		{
			cout<<name<<endl;
			cout<<ifsc<<endl;
			cout<<branch<<endl;
			cout<<bankname<<endl;
			cout<<accno<<endl;
			cout<<cardno<<endl;
			cout<<pin<<endl;
			cout<<balance<<endl;
		}
		void depositamount()
		{
			int amt;
			cin>>amt;
			balance+=amt;
		}
		void withdrawamount()
		{
			int amt;
			cin>>amt;
			if(balance-amt<2000)
			{
				cout<<"invalid amount to with draw";
			}
			else
			{
				balance-=amt;
			}
		}
		void pinchange()
		{
			int newpin;
			cin>>newpin;
			if(newpin==pin)
			{
				cout<<"old and new pins are same";
			}
			else
			{
				pin=newpin;
			}
		}
};
int main()
{
	Bankaccount person("Sowmya","sbi004","kkdmain","SBI",4564,5424,123456,2000);
	int pin;
	cout<<"enter pin";
	cin>>pin;
	if(pin==person.getpin())//as pin is private variable
	{
		while(1)
		{
			cout<<"1:view amount  2:deposit amount  3:withdraw amount 4:pin change 5:view details 6:exit";
			int ch;
			cin>>ch;
			if(ch==1)
			{
				person.displayamount();
			}
			else if(ch==2)
			{
				person.depositamount();
			}
			else if(ch==3)
			{
				person.withdrawamount();
			}
			else if(ch==4)
			{
				person.pinchange();
			}
			else if(ch==5)
			{
				person.viewdetails();
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		cout<<"invalid pin";
	}
	return 0;
	
	
}
