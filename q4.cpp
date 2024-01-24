/*Write a program to find the factorial of input one number.*/
#include<iostream>
using namespace std;
int main()
{
	int i=1,f=1,n;
	cout<<"Enter input one number:";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		if(i>1)
	{		
	cout<<i<<"*";
	f*=i;	
	}else
	if(i==1)
	{
		cout<<i;
	}
	}
	cout<<"="<<f<<endl;
	return 0;
}