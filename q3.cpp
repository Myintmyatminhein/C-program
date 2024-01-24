/*Write a program to find the input number of fibonancci sequence.*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number:";
	cin>>n;
	int first=0,second=1;
	for(int i=0;i<n;i++)
	{
		int third;
		third = first+ second;
        first = second;
        second = third;
    	cout << third << " ";
	}
	return 0;
}