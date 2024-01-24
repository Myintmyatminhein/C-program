#include <iostream>
using namespace std;
int main (){
	char ans='y';
	while(ans='y'){
		
	int num,i,c=0;
	cout<<"Enter number:";
	cin>>num;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)c++;
	}
	
	if(c==1)cout<<num<<"is prime number:\n";
	else cout<<num<<"is not prime number:\n";
	cout<<"Anymore y/n:";
	cin>>ans;
}
	return 0;	
}