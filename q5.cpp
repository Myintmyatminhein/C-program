/* Write a program to find the search value by using  binary search.*/
#include <iostream>
using namespace std;
int main(){
    int num;
	cout<<"Enter size of array:";
	cin>>num;
	int array[num];
	for(int i=0;i<num;i++){
		cout<<"Enter numbers:";
		cin>>array[i];
	}
	for(int i=0;i<num;i++)
	{
		for(int k=i+1;k<num;k++){
		if(array[i]>array[k]){
			
			int temp;
			temp=array[i];
			array[i]=array[k];
			array[k]=temp;
		}
		}
	}
	cout<<"Aescending order of numbers:";
	for(int i=0;i<num;i++){
		cout<<array[i]<<endl;
	}
	
  int start=0,end=num-1,find=0;
	int mid,searchvalue;	
	cout<<"\nEnter the search value:";
	cin>>searchvalue;
	while(find==0)
	{
		mid=(start+end)/2;
		if(array[mid]==searchvalue){
			
			find=mid;
			break;
		}
		else if (searchvalue<array[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	cout<<"the search value is found at:"<<find+1<<endl;
	return 0;
	}