#include<iostream>
using namespace std;
class Distance
{
	private: int feet;
			 float inches;
	public:Distance():feet(0),inches(0.0)
	{}
	Distance(int ft,float in):feet(ft),inches(in)
	{}	
	void getdist()
	{
		cout<<"\nEnter feet:";
		cin>>feet;
		cout<<"\Enter inches:";
		cin>>inches;
	}
	void showdist()
	{
		cout<<feet<<"\'"<<inches<<"\"";
	}
	void Distance::add_dist(Distance d1,Distance d2)
	{
		inches=d1.inches+d2.inches;
		feet=0;
		if(inches>=12.0)
		{
			inches-=12.0;
			feet++;
		}
		feet+=d1.feet+d2.feet;
	}
};
int main()
{
	Distance dist1,dist3;
	Distance dist2(11,6.25);
	cout<<"Enter for dist1=";
	dist1.getdist();
	dist3.add_dist(dist1,dist2);
	cout<<"\n dist1=";
	dist1.showdist();
	cout<<"\n dist2=";
	dist2.showdist();
	cout<<"\ndist3=";
	dist3.showdist();
	cout<<endl;
	return 0;
}