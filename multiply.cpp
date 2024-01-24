#include<iostream>
using namespace std;
int main(){
	char ans='y';
	while(ans='y'){
		int num;
		cout<<"Enter number:";
		cin>>num;
		for(int i=1;i<=12;i++){
			cout<<num<<"*"<<i<<"="<<num*i<<endl;
			}
			cout<<"Do another number y/n:";
			cin>>ans;
	}
	return 0;
}