#include<iostream>
using namespace std;
int main(){
	int f,s,t,i,n;
	cout<<"Enter sequence:";
	cin>>n;
	f=1,s=1;
	cout<<f<<","<<s;
	for(i=3;i<=n;i++){
		t=f+s;
		cout<<","<<t;
		f=s;
		s=t;
	}
	cout<<endl;
	return 0;
}