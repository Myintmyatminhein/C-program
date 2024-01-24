/*2.write a program input number of arrays and display the result by descending orders.*/
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
		if(array[i]<array[k]){
			
			int temp;
			temp=array[i];
			array[i]=array[k];
			array[k]=temp;
		}
		}
	}
	cout<<"Descending order of numbers:";
	for(int i=0;i<num;i++){
		cout<<array[i]<<endl;
	}
	return 0;
	
	
	
}