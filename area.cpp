//Write a program to find the rectangle ,circle and triangle aera using while loop.
#include <iostream>
using namespace std;
int main(){
	char ans='y';
	while(ans=='y'){

	float l,w,b,h,r,pi=3.14,ra,ta,ca;
	cout<<"Enter length and width for rectangle area:";
	cin>>l>>w;
	ra=l*w;
	cout<<"Rectangle area:"<<ra<<endl;
	
	cout<<"Enter base and height for triangle area:";
	cin>>b>>h;
	ta= 0.5*b*h;
	cout<<"triangle area:"<<ta<<endl;
	
	cout<<"Enter radius for circle area:";
	cin>>r;
	ca=pi*r*r;
	cout<<"Circle area:"<<ca<<endl;
	
	cout<<"Anyone y/n:";
	cin>>ans;
	}
	return 0;
	
	
	
}