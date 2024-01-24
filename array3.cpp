//write a program input number of characters in the character array and output that characters.
#include<iostream>
using namespace std;
int main(){
	char ans='y';
	while(ans='y'){
	int n;
	char C[50];
	cout<<"How many characters input in the array:";
	cin>>n;
	cout<<"Enter character:";
	for(int i=0;i<n;i++)
	{
		cin>>C[i];
	}
	cout<<"Display character:";
	for(int j=0;j<n;j++)
	{
		cout<<C[j]<<",";
	}
	cout<<endl;
	cout<<"Do one more:y/n?::";
	cin>>ans;
	}
	return 0;
}