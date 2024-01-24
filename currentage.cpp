//write a program to find the current age.
#include<iostream>
using namespace std;
int main(){
	int cage,cyr,byr;
	cout<<"Enter current year and birth year:";
	cin>>cyr>>byr;
	cage=cyr-byr;
	cout<<"Current age is "<<cage<<"yr"<<endl;
	return 0;
}