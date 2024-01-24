#include <iostream>
using namespace std;
int main(){
	char ans='y';
	while(ans=='y')
	{
	int n,temp;
	cout<<"Enter size of array:";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter number:";
		cin>>array[i];
	}	
	
	for(int i=0;i<n;i++)
	{
		for(int p=i+1;p<n;p++)
		{
			if(array[i]<array[p])
			{
				temp=array[i];
				array[i]=array[p];
				array[p]=temp;
			}
		}
	}
	cout<<"descending numbers:";
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<",";
	}
	cout<<endl;
	cout<<"Anymore y/n:";
	cin>>ans;
	
	}
	return 0;
}