//write a program to find the total seconds of input hour, minute and seconds.
#include<iostream>
using namespace std;
int main(){
	
	int tsec,hr,min,sec;
	cout<<"Enter hr, min and sec:";
	cin>>hr>>min>>sec;
	tsec=hr*3600+min*60+sec;
	cout<<"The total second :"<<tsec<<"sec"<<endl;
	return 0;
}