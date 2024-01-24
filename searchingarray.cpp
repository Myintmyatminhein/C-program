#include <iostream>
using namespace std;
int main(){
	char ans='y';
	while(ans=='y')
	{
	int n;
	int sn;
	int temp;
	cout<<"Enter size of array:";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter number:";
		cin>>array[i];
	}	
	cout<<"Enter searching number:";
	cin>>sn;
	for(int i=0;i<n;i++)
	{
		if(sn==array[i])
		{
			temp=i;
		}
	}
	cout<<"Your searched number is at index"<<temp<<endl;
	cout<<"Anymore y/n:";
	cin>>ans;
	
	}
	return 0;
}