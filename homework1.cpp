//Hw1. Write a program to find 	the 4th power of number less than 10000.
#include <iostream>
using namespace std;
int main(){
	int num=1;
	while(num*num*num*num<10000)
	{
		cout<<num<<endl;
		num++;
	}
	return 0;
}