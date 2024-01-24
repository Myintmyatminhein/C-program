//write a program to find the area of triangle.
#include<iostream>
using namespace std;
int main(){
	float b,h,a;
	cout<<"enter base and height:";
	cin>>b>>h;
	a= 0.5*b*h;
	cout<<"Area of triangle is "<<a<<"sq unit"<<endl;
	return 0;
}