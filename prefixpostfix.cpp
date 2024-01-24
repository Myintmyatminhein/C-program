//prefix and postfix
#include<iostream>
using namespace std;
int main(){
	
	int c=1;
	cout<<"c="<<++c<<endl;//2
	cout<<"c="<<c++<<endl;//2//3
	cout<<"c="<<c<<endl;//3
	cout<<"c="<<c--<<endl;//3//2
	cout<<"c="<<c<<endl;//2
	cout<<"c="<<--c<<endl;//1
	c++;//2
	cout<<"c="<<c<<endl;//2
	++c;//3
	cout<<"c="<<c<<endl;//3
	return 0;
}