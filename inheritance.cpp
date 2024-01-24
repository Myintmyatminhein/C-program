#include<iostream>
using namespace std;
class Counter
{
	protected:unsigned int count;
	public:Counter():count(0)
	{}
	Counter(int c):count(c)
	{}
	unsigned int get_count()
	{
		return count;
	}
	Counter operator++()
	{
		return Counter(++count);
	}
};
class CountDn:public Counter
{
	public:Counter operator--()
	{
		return Counter(--count);
	}
};
int main()
{
	CountDn c1,c2;
	cout<<"\nc1=";
	cout<<c1.get_count();//0
	++c1;++c1;++c1;
	cout<<"\nc1=";
	cout<<c1.get_count();//3
	--c1;--c1;
	cout<<"\nc1=";
	cout<<c1.get_count();//1
	cout<<endl;
	return 0;

}