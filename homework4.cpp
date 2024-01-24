//HW 3.Write a program input positive integers and inside the loop displya that even positive number 
//and terminate negative value.
#include <iostream>
using namespace std;
int main(){
	int input;
	cout<<"Enter positive integers:";
	cin>>input;
	while(input>=0){
		if(input%2==0){
			
		
		cout<<input<<endl;
	
		}
			cout<<"Enter positive integers:";
	    cin>>input;
	}
	return 0;
}