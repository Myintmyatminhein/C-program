#include<iostream>
using namespace std;
const int LEN=80;
class employee
{
	protected:char name[LEN];
				unsigned long number;
				public:void getdata()
				{
					cout<<"\n Enter last number:";
					cin>>name;
					cout<<"Enter number:";
					cin>>number;
				}
				void putdata()const
				{
					cout<<"\n Name:"<<name;
					cout<<"\n Number:"<<number;
				}
};
class manager:public employee
	{
		private:char title[LEN];
		double dues;
		public:void getdata()
		{
			employee:getdata();
			cout<<"Enter title;";cin>>title;
			cout<<"Enter golf club dues:";cin>>dues;
		}
		void putdata()const
		{
			employee::putdata();
			cout<<"\n Title:"<<title;
			cout<<"\n Golf club dues:"<<dues;
		}
	};
	class scientist:public  employee
	{
		private:int pubs;
		public:void getdata()
	{
		employee::getdata();
		cout<<"\Enter number of pubs:";
		cin>>pubs;
	}
	void putdata()const
	{
		employee::putdata();
		cout<<"\n Number of publications:"<<pubs;
	}
	};



class labrober:public employee
{
	
};
class foreman:public laborer
{
	private:float quotas;
	public:void getdata()
	{
		laborer::getdata();
		cout<<"Enter quotas:";
		cin>>quotas;
	}
	void putdata()
	{
		laborer::putdata();
		cout<<"\nQuotas:"<<quotas;
	}
};
int main()
{
	laborer l1;
	foreman f1;
	cout<<endl;
	cout<<"\n Enter data for larborer1:";
	l1.getdata();
	cout<<"\n Enter data for foreman1:";
	f1.getdata();
	cout<<endl;
	cout<<"\n Data on foreman1:";
	f1.putdata();
	cout<<endl;
	retrun 0;
}