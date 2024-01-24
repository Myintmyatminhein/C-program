///write a program input number of integers array and substract 5 if each input number is greater than that number.then display the result from the array.
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter array size:";
	cin>>num;
	cout<<"Enter number:";
	int array[num];
	for(int i=0;i<num;i++){
		cin>>array[i];
		if(array[i]>5){
			
		 array[i]=array[i]-5;
		}
		
		
	}
	for(int j=0;j<num;j++){
			cout<<array[num]<<",";
			cout<<"The array is";
		}
		cout<<endl;
		return 0;
	
}