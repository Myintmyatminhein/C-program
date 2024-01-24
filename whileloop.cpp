/*Write a program to find the sum of number of inpu data and then find the average	
using while loop.*/
#include<iostream>
using namespace std;
int main(){
	char ans='y';
	while(ans=='y'){
	int n,num,sum=0,avg=0,i=1;
	cout<<"How many input data:";
	cin>>n;
	while(i<=n)
	{
		
		cout<<"Enter number:";
		cin>>num;
		sum+=num;
		i++;
	}
	cout<<"the sum="<<sum<<endl;
	avg=sum/n;
	cout<<"the average="<<avg<<endl;
	cout<<"Anyone y/n:";
	cin>>ans;
	}
	return 0;
}