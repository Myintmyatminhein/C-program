#include <iostream>
using namespace std;
void multiplicationtable(){
		int num;
		cout<<"Enter number:";
		cin>>num;
		for(int i=1;i<=12;i++)
		{
			cout<<num<<"*"<<i<<"="<<num*i<<endl;
		}
	
}
void primenumber(){
	int num,i,c=0;
	cout<<"Enter number:";
	cin>>num;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)c++;
	}
	
	if(c==1)
	{
	cout<<num<<"is prime number:\n";
	}
	else 
	{
	cout<<num<<"is not prime number:\n";
	}
}
void factorial(){
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
}
void trainglearea(){
	float b,h,a;
	cout<<"enter base and height:";
	cin>>b>>h;
	a= 0.5*b*h;
	cout<<"Area of triangle is "<<a<<"sq unit"<<endl;
}
void passfail(){
	int m;
	cout<<"Enter mark:";
	cin>>m;
	if(m>=40 && m<=100){
		cout<<"pass"<<endl;
	}
	else{
		cout<<"fail"<<endl;
	}
}
void menu(){
	cout<<"1.multiplication table"<<endl;
	cout<<"2.prime number"<<endl;
	cout<<"3.factorial"<<endl;
	cout<<"4.triangle area"<<endl;
	cout<<"5.pass or fail of one mark:"<<endl;
}
int main(){
	int num;
	char ans='y';
	while(ans=='y')
	{
		
	menu();
	cout<<"Enter number to choose function:";
	cin>>num;
	switch(num)
	{
		case 1:	multiplicationtable();break;
		case 2: primenumber();break;
		case 3: factorial();break;
		case 4: trainglearea();break;
		case 5: passfail();break;
		default:cout<<"wrong number"<<endl;break;
		
		
	}
	cout<<"Anymore y or n:";
	cin>>ans;
	}
	return 0;
	
	
}