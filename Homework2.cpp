////HW 2.Write a program to find the input two value by multiply then ternminate one of input value is negative.
#include <iostream>
using namespace std;
int main(){
	int in1,in2,output=0;
	cout<<"Enter two input:";
	cin>>in1>>in2;
	while(in1>=0 && in2>=0){
		output=in1*in2;
		cout<<output<<endl;
		cout<<"Enter two input;";
		cin>>in1>>in2;
	}
	return 0;
		

}