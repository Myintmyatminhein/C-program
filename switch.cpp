#include<iostream.h>
using namespace std;
int main()
{
	char op;int n1,n2;
	char ans;
	do{
		cout<<"Enter number 1=";
		cin>>n1;
		cout<<"Enter number 2=";
		cin>>n2;
		cout<<"+ operator:\n";
		cout<<"- operator:\n";
		cout<<"* operator:\n";
		cout<<"% operator:\n";
		cout<<"Enter operator=";
		cin>>op;
		switch(op)
		{
			case "-":cout<<"answer="<<n1-n2<<endl;break;
			case "+":cout<<"answer="<<n1-n2<<endl;break;
			case "*":cout<<"answer="<<n1-n2<<endl;break;
			case "/":cout<<"answer="<<n1-n2<<endl;break;
			case "%":cout<<"answer="<<n1-n2<<endl;break;
			default:cout<<"answer="<<"Invalid operator"<<endl;break;
		}
		cout<<"anymore y/n";
		cin>>ans;
	}while(ans=='y');
	return 0;
}