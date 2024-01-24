#include<iostream>
#include<cstring>
using namespace std;
class String 
{
    private:enum{s=50};
            char str[s];
    public:String ()
    {
        str[0];
    }
    String (char s[])
    {
        strcpy(str,s);
    }
    void getstring()
    {
        cout<<"Enter String:";
        cin.getline(str,50);
    }
    void showstring()
    {
        cout<<str;
    }
    void concat(String s1)
    {
        if(strlen(str)+strlen(s1.str)<s)
        strcat(str,s1.str);
        else 
        cout<<"\n your string is too long.";
    }
};
int main()
{
    String s1("Hi " );
    String s2;
    String s3;
    cout<<"";
    s2.getstring();
    s1.showstring();
    cout<<endl;
    s2.showstring();
    cout<<endl;
    s1.concat(s2);
    s1.showstring();
    return 0;
}