//1.Write a program input three integer numbers find sum and average of that three numbers.
#include<iostream>
using namespace std;
int main(){
	
	int a,b,c,z;
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	z=a+b+c;
	cout<<"The sum :"<<z<<endl;
	int y= z/3;
	cout<<"The average:"<<y<<endl;
	
	return 0;

}