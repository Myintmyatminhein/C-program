//Write a program to check the input is even or odd.
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter Number :";
	cin>>num;
	if(num%2==0) cout<<num<<" is even number.\n";
	else         cout<<num<<" is odd number.\n";
	return 0;
}