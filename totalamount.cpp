//write a program to find the amount of input quantity and price.
#include<iostream>
using namespace std;
int main(){
	
	int am,q,p;
	cout<<"Enter quantity and price:";
	cin>>q>>p;
	am=q*p;
	cout<<"The amount :"<<am<<" kyats"<<endl;
	return 0;
}