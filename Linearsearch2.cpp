#include<iostream.h>
int main()
{
	int num[] = {12, 34, 9, 23, 90};
	int key, i, found=0;
	i=0;
	cout<<"Enter search key";
	cin>>key;
	
	while(i<5 && key!=num[i])
	{
		i++;
	}
	if(i<5)
	{
		cout<<key<<" is found at position "<<i<<endl;
	}
		 
	else cout<<key<<" is not found"<<endl;
}