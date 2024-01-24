#include<iostream>
using namespace std;
int main(){
	char ans='y';
	while(ans=='y'){	
		int num,pw=0;
		cout<<"Enter number:";
		cin>>num;
		pw=num*num*num*num;
		if(pw<10000)
		{
			pw=num*num*num*num;
			cout<<"4th power of this number is :"<<pw<<endl;
		}
		cout<<"One more y/n:";
		cin>>ans;
	}
	return 0;
}