#include <iostream>
using namespace std;
int main(){
	char ans='y';
	while(ans=='y')
	{
		int n1,n2,gcd=1;
		cout<<"Enter two numbers:";
		cin>>n1>>n2;
		for(int i=2;i<=n1;i++)
		{
			if(n1%i==0&&n2%i==0) gcd=i;
		}
		cout<<"the greatest common divisor of"<<n1<<"&"<<n2<<"="<<gcd<<endl;
		cout<<"anymore y/n:";
		cin>>ans;
	}
	return 0;
}