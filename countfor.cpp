#include<iostream>
using namespace std;
int main(){
	int nstd,m1,m2,pc=0,dc=0,fc=0,cc=0;
	cout<<"Enter number of students:";
	cin>>nstd;
	for(int i=1;i<=nstd;i++){
		cout<<"Enter two marks:";
		cin>>m1>>m2;
		if(m1>=40 && m2>=40){
			if((m1>=80 && m1<=100)||(m2>=80&m2<=100)){	
				dc++;
			}
			else if((65>=m1<80)&&(m2>=65<80)){
				cc++;
			}
			pc++;
		}
		else{
			fc++;
		}	
		
	}
		cout<<"pass count:"<<pc<<endl;
		cout<<"distnctions count:"<<dc<<endl;
		cout<<"credict count:"<<cc<<endl;
		cout<<"fail count:"<<fc<<endl;
	return 0;
}