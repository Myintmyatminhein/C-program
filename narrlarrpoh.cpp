#include<iostream.h>
int main()
{
	int num[] = {12, 34, 9, 23, 90};
	int key, i, found=0;
	i=0;
	cout<<"Enter Search Key";
	cin>>key;
	num[5]= key;
	
l1:	if(num[i]==key)
	{
		if(i<5)
		{
			cout<<key<<" is found at position "<<i<<endl;
		}
	
	else
		{
		   cout<<key<<"is not found"<<endl;			
		}
		
	}
	else 
		{
		    i++;
		    goto l1;
		}
	
	
}
