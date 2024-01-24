//Write a program to test the result of one input mark which is pass or fail or distinction.
#include <iostream>
using namespace std;
int main(){
	int mark;
	cout<<"Enter one input mark: ";
	cin>>mark;
	if (mark>=40 & mark<=100){
		if(mark>=80 & mark<=100){
			cout<<"Your mark"<<mark<<"is distinction\n";
		}
		else{
			cout<<"Your mark"<<mark<<"is pass\n";
		}
	}else if (mark<40){
	cout<<"Your mark"<<mark<<"is fail\n";
	}
	if(mark%2==0){
		cout<<"Your mark"<<mark<<"is even.\n";
	}
	else{
		cout<<"Your mark"<<mark<<"is od\n";
	}
	return 0;
}