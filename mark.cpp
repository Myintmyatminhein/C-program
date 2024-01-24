//Write a program to check the input mark is fail or pass or distinctions.
#include<iostream>
using namespace std;
int main(){
	
	int m;
	cout<<"Enter mark:";
	cin>>m;
	if(m>=40){
		
		if(m>=80 & m<=100){
			
			cout<<m<<" is distinctions\n";
		
		}else {
			cout<<m<<" is pass.\n";
		}
	}else {
		cout<<m<<" is fail.";
	}
	return 0;
}