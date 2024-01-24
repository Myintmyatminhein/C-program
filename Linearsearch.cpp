#include<iostream.h>
int main()
{
	int key,i, found=0;
	int num[] = {36, 34, 89, 10, 12};
	cout<<"enter search key";
	cin>>key;
	for(i=0;i<5;i++)
	{
		if(key == num[i])
		{
			found = 1;
			break;
		}
		
	}
	if(found==1) cout<<key<<"is found at position "<<i<<endl;
	else cout<<key<<" is not found"<<endl;
}