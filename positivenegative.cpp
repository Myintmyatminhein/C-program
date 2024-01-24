//write a program to check the input number is positive or negative or zero.
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter number :";
	cin>>num;
	if(num>0) cout<<num<<" is positive number.\n";
	else if  cout<<num<<" is negative number.\n";
	else cout<<num<<" is zero:";
	return 0;
}