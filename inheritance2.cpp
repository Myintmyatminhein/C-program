#include<iostream>
using namespace std;
const int LEN=80;
class student{
	protected:char school[LEN];
				char degree[LEN];
	public:void get_edu()
	{
		cout<<"Enter name of school or University:";
		cin>>school;
		cout<<"Enter highest earned\n";
		cout<<"(Highest,Bachelor's,Master's,PHD\n";
		cin>>degree;
	}
	void put_edu()
	{
		cout<<"\n School or University:"<<school;
		cout<<"\n Highest degree earned:"<<degree;
	}
};
class employee
{
	protected:char name[LEN];
	unsigned long number;
	public:void get_data()
	{
		cout<<"\n Enter last name:";
		cin>>name;
		cout<<"\n Enter number:";
		cin>>number;
	}
	void put_data()
	{
		cout<<"\n Name:"<<name;
		cout<<"\n Number:"<<number;
	}
};
class manager:public employee,public student
{
	private:char title[LEN];
			double dues;
	public:void get_data()
	{
		employee::get_data();
		cout<<"Enter title:";
		cin>>title;
		cout<<"Enter golf dues:";
		cin>>dues;
		student::get_edu();
	}
	void put_data()
	{
		employee:put_data();
		student::put_edu();
		cout<<"Title="<<title<<endl;
		cout<<"Dues="<<dues<<endl;
	}
};
class scientist:public employee,private student
{
	private:int pubs;
	public:void get_data();
	{
		employee:get_data();
		cout<<"Enter number of pubs:";
		cin>>pubs;
		student::get_edu();
	}
	void put_data()
	{
		employee::putdata();
		cout<<"\n Number of publications:"<<pubs;
		student::put_edu();
	}
};
class labour:public employee
{
	
};
int main()
{
	manager m1;
	scientist s1,s2;
	labour l1;
	cout<<"\n Enter data for manager1";
	m1.getdata();
	cout<<"\n Enter data for scientist1";
	s1.get_data();
	cout<<"\n Enter data for scientist2";
	s2.getdata();
	cout<<"\n Enter data for 	labour1";
	l1.getdata();
	cout<<"\n Data for manager:";
	m1.putdata();
	return 0; 
}