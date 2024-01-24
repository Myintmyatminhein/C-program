//Write a program to check the input is less than 100 or not.
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number:";
	cin>>num;
	if(num<100) cout<<num<<" is less than 100.\n";
	else        cout<<num<<" is greater than 100.\n";
	return 0;
}