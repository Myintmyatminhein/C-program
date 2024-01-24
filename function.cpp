#include<iostream>
using namespace std;
void input();
int res(int,int);
void display();
int n,s1,s2;
int p=0,d=0,c=0,f=0;
int i=0;
void input()
{
	i++;
	cout<<"Enter two subject marks for student"<<i<<endl;
	cin>>s1>>s2;
	
}
int res(int s1,int s2)
{
	if((s1>=40)&&(s2>=40)) {
		if	((s1>=80&&s1<+100)||(s2>=80&&s2<=100)){
			d++;
			p++;
		}
		else if ((s1>=65&&s1<80)&&(s2>=65&&s2<80))
		{
			c++;
			p++;
		}
		else p++;
	}
	else f++;
}
void display()
{
	cout<<"\n Total student="<<i;
	cout<<"\nDistionction studnet="<<d;
	cout<<"\nCredit student="<<c;
	cout<<"\nTotal pass student="<<p;
	cout<<"\n total fail student="<<f;
	cout<<endl;
}
int main()
{
	char ch='y';
	do{
		input();
		res(s1,s2);
		cout<<"another student (y/n)?";
		cin>>ch;
		cout<<endl;
		
	}
	while(ch=='y');
	display();
	cout<<endl;
	return 0
}