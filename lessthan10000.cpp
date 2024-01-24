//Write a program to find the 4th power of num less than 10000.
#include <iostream>
using namespace std;
int main(){
	int num=1,pow=1
	while(pow<10000)
	{
		pow=num*num*num*num;
		cout<<"4th power of"<<num<<"="<<pow<<endl;
		num++;
	}
	return 0;
}