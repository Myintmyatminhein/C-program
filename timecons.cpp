#include<iostream>
using namespace std;
class Time{
	private:int hour;
	        int minute;
	        int second;
    public:Time():hour(0),minute(0),second(0)
    {
    	
    }
    Time(int hr,int min,int sec):hour(hr),minute(min),second(sec)
    {
    	
    }
    void gettime()
    {
    	cout<<"Enter hour:";
    	cin>>hour;
    	cout<<"Enter minute:";
    	cin>>minute;
    	cout<<"Enter second:";
    	cin>>second;
    }
    void showtime()
    {
    	cout<<hour<<":"<<minute<<":"<<second;}
    	Time add_time(Time);
};
Time Time::add_time(Time t2)
{
	Time temp;
	temp.second=second+t2.second;
	if(temp.second>=60){
		temp.second-=60;
		temp.minute=1;
	}
	temp.minute+=minute+t2.minute;
	if(temp.minute>=60)
	{
		temp.minute-=60;
		temp.hour=1;
	}
	temp.hour+=hour+t2.hour;
	return temp;
}
int main()
{
	Time time1,time3;
	Time time2(11,59,59);
	time1.gettime();
	time3=time1.add_time(time2);
	cout<<"the sum of time 1 & time 2 equal time3=";
	time3.showtime();
	cout<<endl;
	return 0;
}