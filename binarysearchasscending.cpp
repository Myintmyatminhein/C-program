//binary search using asscending order
#include<iostream>
using namespace std;
int main()
{
	int B[25],n;
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter numbers to the array:";
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter number:";
		cin>>B[i];
		cout<<endl;
	}
	//ascending order
	for(int k=0;k<n-1;k++)
	{
		for(int j=k+1;j<n;j++)
		{
			int temp;
			if(B[k]>B[j])
			{
				temp=B[k];
				B[k]=B[j];
				B[j]=temp;
			}
		}
	}
	cout<<"Display ascending sorted orders:";
	for(int p=0;p<n;p++)
	{
		cout<<B[p]<<",";
	}
	//search value
	int start=0,end=n-1,find=0;
	int mid,svalue;	
	cout<<"\nEnter the search value:";
	cin>>svalue;
	while(find==0)
	{
		mid=(start+end)/2;
		if(B[mid]==svalue){
			
			find=mid;
			break;
		}
		else if (svalue,B[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	cout<<"the search value is found at:"<<find+1<<endl;
	return 0;
	}