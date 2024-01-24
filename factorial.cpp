#include<iostream>
using namespace std;
int main()
{
	int i=1,fact=1,N;
	cin>>N;
	while(i<=N)
	{
		fact*=i;
		i++;
	}
	cout<<fact<<endl;
	return 0;
}