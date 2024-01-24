//write a program to find the total inches of input yard and feet and inches.
#include<iostream>
using namespace std;
int main(){
	
	int tinc,yrd,ft,inc;
	cout<<"Enter yard, feet and inches:";
	cin>>yrd>>ft>>inc;
	tinc=yrd*36+ft*12+inc;
	cout<<"The total inches :"<<tinc<<"inches"<<endl;
	return 0;
}