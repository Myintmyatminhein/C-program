#include<iostream>
using namespace std;
void input();
int add(int,int,int);
float avg1(int,int);
void display();
int a,b,c,sum=0;
float average=0.0;
int main()
{
	int n=3;
	input();
	sum=add(a,b,c);
	average=avg1(sum,n);
	display();
	return 0;
}
void input()
{
	cout<<"Enet three number:";
	cin>>a>>b>>c;
	
}
int add(int a,int b,int c)
{
	int sum1=0;
	sum1=a+b+c;
	return sum1;
}
float avg1(int sum,int n)
{
	float Avg=0.0;
	Avg=sum/n;
	return Avg;
}
void display()
{
	cout<<"Sum="<<sum<<endl;
	cout<<"Average="<<average<<endl;
}