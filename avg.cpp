#include<iostream.h>
int main()
{
	int num, sum=0,i;
	float avg;
	
	cout<<"Enter Number";
	for(i=1;i<=5;i++)
	{
		cin>>num;
		sum +=num;
	}
	cout<<"Total Sum is "<<sum<<endl;
	
}