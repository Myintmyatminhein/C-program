//write a program input 10 integers value in the array and find sum and average.
#include <iostream>
using namespace std;
int main(){
	int sum=0,avg=0;
	int a[10];
	cout<<"Enter numbers:";
	for(int i=0;i<10;i++){
		cin>>a[i];
		sum+=a[i];	
	}
	cout<<sum<<endl;
	avg=sum/10;
	cout<<avg<<endl;
	return 0;
}